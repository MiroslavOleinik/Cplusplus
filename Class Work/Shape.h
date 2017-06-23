#pragma once
#include "Graphics.h"

class Shape
{
public:
	Shape();
	~Shape();
	
	void Draw(Graphics* graphics);
	void Move(int x, int y);
};

class Circle : public Shape
{
public:
	Circle(int cX, int cY, int radius);
	~Circle();

	void Draw(Graphics* graphics);
	void Move(int x, int y);
protected:
	int m_x = 0;
	int m_y = 0;
	int m_radius = 0;
};

class Smile : public Circle
{
public:
	Smile(int cX, int cY, int radius);

	void Draw(Graphics* graphics);
	void Move(int x, int y);
private:
	Circle m_leftEye;
	Circle m_rightEye;

};
