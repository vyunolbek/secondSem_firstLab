#pragma once

#include "Animal.h"

class Tpredator : public TAnimal
{
public:
	Tpredator();
	Tpredator(const Tpredator& p);
	Tpredator(double _weight, double _height, double _length);

	virtual void Print();
};