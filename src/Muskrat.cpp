#include "..\headers\Muskrat.h"

Muskrat::Muskrat()
{
	WoolLength = 1;
}

double Muskrat::GetWoolLength()
{
	return WoolLength;
}

void Muskrat::SetWoolLength(double _WoolLength)
{
	WoolLength = _WoolLength;
}
