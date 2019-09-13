#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car
{
public:
	Car();
	Car(string _brand, int _num);

	void OutputVariable();

protected:
	string Brand;
	int NumOfDoors;
};

#endif#pragma once
