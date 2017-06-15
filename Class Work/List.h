#pragma once
struct Node
{
	int Data;
	Node* Next = nullptr;
	
	Node(int data) : Data(data)
	{
	}
};

class Iterator
{
private:

	Node* m_node;

public:

	Iterator(Node* node) : m_node(node)
	{
	}

	Iterator operator++()
	{
		if (m_node != nullptr)
		{
			m_node = m_node->Next;
		}
		return *this;
	}

	int operator*()
	{
		return m_node->Data;
	}

	bool operator==(Iterator const& rhs) const
	{
		return m_node == rhs.m_node;
	}

	bool operator!=(Iterator const& rhs) const
	{
		return !(*this == rhs);
	}
	friend class List;
};

class List
{
private:
	Node* m_head;

	Node* GetLast()
	{
		Node* cur = m_head;
		while (cur->Next)
		{
			cur = cur->Next;
		}
	}

public:
	Iterator begin()
	{
		return Iterator(m_head);
	}

	Iterator end()
	{
		return Iterator(nullptr);
	}

	void Insert(int value, Iterator position)
	{
		Node* newNode = new Node(value);
		newNode->Next = position.m_node->Next;
		position.m_node->Next = newNode;
		
		int buff = newNode->Data;
		newNode->Data = position.m_node->Data;
		position.m_node->Data = buff;
	}
};