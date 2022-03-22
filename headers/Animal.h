#pragma once

class TAnimal
{
public:
	TAnimal();
	~TAnimal();
	double GetWeight();
	void SetWeight(double _weight);
	void SetLength(double _length);
	double GetLength();
	void SetHeight(double _height);
	double GetHeight();
	void SetColorCount(int _colorCount);
	void SetColor(int color, int i);
	int GetColorCount();
	int GetColor(int i);

	virtual void Print() = 0;
protected:
	double weight;
	double length;
	double height;

	int* color;
	int colorCount;
};