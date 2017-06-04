#pragma once

class Interval
{
public:
	Interval();
	Interval(float start, float end);

	float getLength();
	void getNewCoordinates(float start, float end);
	void moveCoordinates(float dist);
	void expandLength(float scale);
	bool isEmpty();

private:
	float m_start;
	float m_end;
};