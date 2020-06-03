#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

struct Coord
{
	int x;
	int y;
};

class MyRectangl
{
private:
	int length;
	int width;
	char symbol;
	Coord coord;

	static int count;


	inline bool IsCorrectSize(int size) const
	{
		return size > 0;
	}

	inline bool IsCorrectCoord(int coord) const;
	


public:
	MyRectangl() // конструктор за замовчуванням
	{
		length = 0;
		width = 0;
		symbol = '#';
		coord = { 0,0 };
		count++;
	}

	MyRectangl(int size);
	

	MyRectangl(int _length, int _width);
	

	static int GetCountOfRectangles()
	{
		return count;
	}

	void Set_Symbol(char _symbol);

	void Move(int moveX, int moveY);

	void Resize(int newLength, int newWidth);

	void Print() const;
	
};


