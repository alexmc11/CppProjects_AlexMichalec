#pragma once
class Circle
{
private:
	float coorx;
	float coory;
	float radio;
public:
	Circle(float a, float b, float r);
	~Circle();
	float GetRadio();
	float Area();
};

