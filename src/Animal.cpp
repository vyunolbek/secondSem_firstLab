#include "../headers/Animal.h"


TAnimal::TAnimal()
{
	weight = 0;
	length = 0;
	height = 0;
	colorCount = 5;
	color = new int[colorCount];
}

TAnimal::~TAnimal()
{
	weight = 0;
	length = 0;
	delete color;
}

double TAnimal::GetWeight()
{
	return weight;
}

void TAnimal::SetWeight(double _weight)
{
	weight = _weight;
}

void TAnimal::SetLength(double _length)
{
	length = _length;
}

double TAnimal::GetLength()
{
	return length;
}

void TAnimal::SetHeight(double _height)
{
	height = _height;
}

double TAnimal::GetHeight()
{
	return height;
}

void TAnimal::SetColorCount(int _colorCount)
{
	if (_colorCount > 0)
	{
		int* temp = new int[_colorCount];
		for (int i = 0; i < (_colorCount < colorCount ? _colorCount : colorCount); i++)
		{
			temp[i] = color[i];
		}
		delete[] color;
		color = temp;
		colorCount = _colorCount;
	}
}

void TAnimal::SetColor(int _color, int i)
{
	if(i >= 0 && i < colorCount) color[i] = _color;
}

int TAnimal::GetColorCount()
{
	return colorCount;
}

int TAnimal::GetColor(int i)
{
	return color[i];
}
