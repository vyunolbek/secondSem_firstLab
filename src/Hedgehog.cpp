#include "..\headers\Hedgehog.h"

Hedgehog::Hedgehog()
{
	NeedlesCount = 1000;
	Bald = false;
}

int Hedgehog::GetNeedlesCount()
{
	return NeedlesCount;
}

void Hedgehog::SetNeedlesCount(int _cnt)
{
	NeedlesCount = _cnt;
}

bool Hedgehog::GetBald()
{
	return Bald;
}

void Hedgehog::SetBald(bool _Bald)
{
	Bald = _Bald;
}
