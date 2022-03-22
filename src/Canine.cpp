#include "..\headers\Canine.h"

Dog::Dog()
{
	Breed = "";
	MaxSpeed = 0;
	BiteForce = 0;
}

string Dog::GetBreed()
{
	return Breed;
}

void Dog::SetBreed(string _breed)
{
	Breed = _breed;
}

double Dog::GetMaxSpeed()
{
	return MaxSpeed;
}

void Dog::SetMaxSpeed(double _MaxSpeed)
{
	MaxSpeed = _MaxSpeed;
}

double Dog::DistancePerTime(double _sec)
{
	return MaxSpeed * _sec;
}

double Dog::GetBiteForce()
{
	return BiteForce;
}

void Dog::SetBiteForce(double _BiteForce)
{
	BiteForce = _BiteForce;
}
