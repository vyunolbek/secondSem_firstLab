#pragma once
#include "Mammals.h"

class Muskrat : public Insectivoress
{
public:
	Muskrat();
	double GetWoolLength();
	void SetWoolLength(double _WoolLength);
protected:
	double WoolLength;

};