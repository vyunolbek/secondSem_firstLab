#include "../headers/Mammals.h"
#include <iostream>


Insectivoress::Insectivoress()
{
	Eat = "Bugs";
	DarkSee = true;
}

Insectivoress::Insectivoress(const Insectivoress& p)
{
	Eat = p.Eat;
	DarkSee = p.DarkSee;
}

string Insectivoress::GetEat()
{
	return Eat;
}

void Insectivoress::SetEat(string _eat)
{
	Eat = _eat;
}

bool Insectivoress::GetSee()
{
	return DarkSee;
}

void Insectivoress::SetSee(bool _see)
{
	DarkSee = _see;
}

void Insectivoress::Print()
{
	std::cout << "This Insectivoress eat " << Eat << " and he can look in the dark: " << DarkSee << std::endl;
}
