#ifndef TRUCK_H
#define TRUCK_H

#include "Car.h"

class Truck : public Car
{
public:
	Truck();
	Truck(string _brand, int _num, float _capacity);

	void OutputVariable();

private:
	float LoadCapacity;
};

#endif
#pragma once
