#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	string Brand;
	int NumOfDoors;
public:
	Car();
	Car(string _brand, int _num);
	virtual void OutputVariable();
	void Printinfo();
};

#endif
