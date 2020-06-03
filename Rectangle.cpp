#include <iostream>
#include "Rectangle.h"
#include <Windows.h>
using namespace std;

int MyRectangl::count = 0;

inline bool MyRectangl:: IsCorrectSize(int size) const
	{
		return size > 0;
	}

	inline bool MyRectangl:: IsCorrectCoord(int coord) const
	{
		return width > 0;
	}


	MyRectangl:: MyRectangl() // конструктор за замовчуванням
	{
		length = 0;
		width = 0;
		symbol = '#';
		coord = { 0,0 };
		count++;
	}

	MyRectangl:: MyRectangl(int size)
	{
		symbol = '#';
		width = length = (IsCorrectSize(size) ? size : 1);
		width = length = (IsCorrectSize(size) ? size : 1);
		coord = { 0,0 };
		count++;
	}

	MyRectangl:: MyRectangl(int _length, int _width)
	{
		length = (IsCorrectSize(_length) ? _length : 1);
		width = (IsCorrectSize(_width) ? _width : 1);
		coord = { 0,0 };
		symbol = '#';
		count++;
	}

	void MyRectangl::Set_Symbol(char _symbol)
	{
		if (_symbol != ' ')
		{
			symbol = _symbol;
		}
	}



	void MyRectangl::Move(int moveX, int moveY)
	{
		coord.x += moveX;
		coord.y += moveY;
	}


	void MyRectangl::Resize(int newLength, int newWidth)
	{
		if (IsCorrectSize(newLength))
			length = newLength;
		if (IsCorrectSize(newWidth))
			width = newWidth;
	}

	void MyRectangl::Print() const
	{
		for (int j = 0; j < width; j++) {
			gotoxy(coord.x, coord.y + j);

			for (int i = 0; i < length; i++) {
				cout << symbol;
			}
			cout << endl;
		}
	}
