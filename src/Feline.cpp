#include "..\headers\Feline.h"

Cat::Cat()
{
	Breed = "";
	JumpHeight = 0;
}

string Cat::GetBreed()
{
	return Breed;
}

void Cat::SetBreed(string _breed)
{
	Breed = _breed;
}

double Cat::CountHeight()
{
	return JumpHeight / height;
}

void Cat::SetJumpHeight(double _JumpHeight)
{
	JumpHeight = _JumpHeight;
}

double Cat::GetJumpHeight()
{
	return JumpHeight;
}
