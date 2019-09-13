#include <iostream>
#include <string>
#include "Car.h"
#include "Header.h"
using namespace std;
int main() {
	Truck MyTruck("Volvo", 4, 20);
	MyTruck.Printinfo();
	return 0;
}
Car::Car() {
	Brand = '/0';
	NumOfDoors = -1;
}
Car::Car(string _brand, int _num) {
	Brand = _brand; NumOfDoors = _num;
}
void Car::OutputVariable() {
	cout << Brand << endl << NumOfDoors << endl;
}
void Car::Printinfo() {
	OutputVariable();
}
Truck::Truck() {
	LoadCapacity = -1;
}
Truck::Truck(string _brand, int _num, float _capacity) :Car(_brand, _num){
	LoadCapacity = _capacity;
}
void Truck::OutputVariable() {
	Car::OutputVariable();
	cout << LoadCapacity << endl;
}