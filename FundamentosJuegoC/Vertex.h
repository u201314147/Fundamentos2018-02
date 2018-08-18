#pragma once
#include <GL/glew.h>

struct Position
{
	float x;
	float y;
	void set(float _x, float _y)
	{
		x = _x;
		y = _y;
	}
};

struct ColorRGBA
{
	GLubyte r;
	GLubyte g;
	GLubyte b;
	GLubyte a;

	void set(GLubyte _r, GLubyte _g, GLubyte _b, GLubyte _a)
	{

		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}

};

struct MyStruct
{

};

struct Vertex
{
	Position position;
	ColorRGBA colorRGBA;

	void setPosition(float x, float y) {
		position.set(x, y);
	}
	void setColorRGBA(GLubyte _r, GLubyte _g, GLubyte _b, GLubyte _a)
	{
		colorRGBA.set(_r, _g, _b, _a);
	}
};