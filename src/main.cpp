#include <iostream>
#include "../headers/Animal.h"
#include "../headers/TPredator.h"
#include "../headers/Mammals.h"
#include "../headers/Muskrat.h"
#include "../headers/Hedgehog.h"
#include "../headers/Canine.h"
#include "../headers/Feline.h"


void main()
{
	Tpredator predator(1, 2, 3);
	Tpredator predator1;
	Insectivoress insectivoress;
	Muskrat muskrat;
	Hedgehog hedgehog;
	Dog dog;
	Cat cat;

	insectivoress.SetSee(true);
	muskrat.SetWoolLength(100);
	hedgehog.SetBald(true);
	hedgehog.SetNeedlesCount(10000);
	dog.SetBreed("Terier");
	dog.SetBiteForce(1000);
	dog.SetMaxSpeed(30);
	cat.SetJumpHeight(50);
	cat.SetBreed("British");
	std::cout << insectivoress.GetSee() << " " << muskrat.GetWoolLength() << " " << hedgehog.GetBald() << " " << hedgehog.GetNeedlesCount() << " " << dog.GetBreed() <<
		" " << dog.GetBiteForce() << " " << dog.GetMaxSpeed() << " " << dog.DistancePerTime(10) << " " << cat.GetJumpHeight() << " " << cat.GetBreed();
}