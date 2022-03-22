#include "../headers/TPredator.h"
#include <iostream>

Tpredator::Tpredator()
{
}

Tpredator::Tpredator(const Tpredator& p)
{
	weight = p.weight;
	height = p.height;
	length = p.length;
	colorCount = p.colorCount;
	color = new int[colorCount];
	for (int i = 0; i < p.colorCount; i++)
		color[i] = p.color[i];
}

Tpredator::Tpredator(double _weight, double _height, double _length)
{
	SetHeight(_height);
	SetWeight(_weight);
	SetLength(_length);
}

void Tpredator::Print()
{
	std::cout << "Predator, weight" << this->GetWeight() << "\tLength = " << this->GetLength() << std::endl;
}
