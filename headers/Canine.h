#pragma once
#include <string>
#include "TPredator.h"

using namespace std;

class Dog : public Tpredator
{
public:
	Dog();
	string GetBreed();
	void SetBreed(string _breed);
	double GetMaxSpeed();
	void SetMaxSpeed(double _MaxSpeed);
	double DistancePerTime(double _sec);
	double GetBiteForce();
	void SetBiteForce(double _BiteForce);
protected:
	string Breed;
	double MaxSpeed;
	double BiteForce;
};