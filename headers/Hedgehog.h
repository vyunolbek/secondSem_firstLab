#pragma once

#include "Mammals.h"

class Hedgehog : public Insectivoress
{
public:
	Hedgehog();
	int GetNeedlesCount();
	void SetNeedlesCount(int _cnt);
	bool GetBald();
	void SetBald(bool _Bald);
protected:
	int NeedlesCount;
	bool Bald;
};