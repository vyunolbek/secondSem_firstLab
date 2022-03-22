#pragma once

#include "TPredator.h"
#include <string>

using namespace std;

class Cat : public Tpredator
{
public:
	Cat();
	string GetBreed();
	void SetBreed(string _breed);
	double CountHeight();
	void SetJumpHeight(double _JumpHeight);
	double GetJumpHeight();
protected:
	string Breed;
	double JumpHeight;
};