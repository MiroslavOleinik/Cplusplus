#include "Shape.h"



Shape::Shape()
{
}


Shape::~Shape()
{
}


void Shape::Draw(Graphics* graphics)
{

}

void Shape::Move(int x, int y)
{

}


Circle::Circle(int cX, int cY, int radius) :
	m_radius(radius),
	m_x(cX),
	m_y(cY)
{

}

Circle::~Circle()
{

}

void Circle::Draw(Graphics* graphics)
{
	graphics->DrawEllipse(m_x - m_radius, m_y - m_radius, m_radius * 2, m_radius * 2);
}

void Circle::Move(int x, int y)
{
	m_x += x;
	m_y += y;
}


Smile::Smile(int cX, int cY, int radius) :
	Circle(cX, cY, radius),
	m_leftEye(m_x - m_radius / 2, m_y - m_radius / 2, m_radius / 5),
	m_rightEye(m_x + m_radius / 2, m_y - m_radius / 2, m_radius / 5)
{
}

void Smile::Draw(Graphics* graphics)
{
	Circle::Draw(graphics);
	m_leftEye.Draw(graphics);
	m_rightEye.Draw(graphics);

	graphics->DrawLine(m_x - m_radius / 2,
		m_y + m_radius / 2, m_x + m_radius / 2,
		m_y + m_radius / 2);
	graphics->SetPixel(m_x, m_y);
}

void Smile::Move(int x, int y)
{
	Circle::Move(x, y);
	m_leftEye.Move(x, y);
	m_rightEye.Move(x, y);
}