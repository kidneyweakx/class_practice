#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

class Truck : public Car {
private:
	float LoadCapacity;
public:
	Truck();
	Truck(string _brand, int _num, float _capacity);
	virtual void OutputVariable();
};


#endif