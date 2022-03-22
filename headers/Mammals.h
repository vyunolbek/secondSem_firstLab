#pragma once
#include "Animal.h"
#include <string>

using namespace std;

class Insectivoress : public TAnimal
{
public:
	Insectivoress();
	Insectivoress(const Insectivoress& p);
	string GetEat();
	void SetEat(string _eat);
	bool GetSee();
	void SetSee(bool _see);
	virtual void Print();
protected:
	string Eat;
	bool DarkSee;
};