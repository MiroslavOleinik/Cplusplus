#include "Interval.h"

Interval::Interval()
{
	m_start = 0;
	m_end = 0;
}

Interval::Interval(float start, float end)
{
	m_start = start;
	m_end = end;
}

float Interval::getLength()
{
	return m_end - m_start;
}

void Interval::getNewCoordinates(float start, float end)
{
	m_start = start;
	m_end = end;
}

void Interval::moveCoordinates(float dist)
{
	m_start += dist;
	m_end += dist;
}

void Interval::expandLength(float scale)
{
	m_end += scale;
}

bool Interval::isEmpty()
{
	if (m_start == m_end)
	{
		return true;
	}
	else
	{
		return false;
	}
}