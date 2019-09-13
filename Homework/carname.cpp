#include <iostream>
#include <string>
using namespace std;
class Car
{
public:
	Car();
	Car(string name, int displacement);
	void input(string model_name, int model_displacement);
	string get_name();
	int get_displacement();
private:
	string name;
	int displacement;
};
int main()
{
	Car Yourcar;
	string the_name;
	int the_displacement;
	cout << "please input the name and the displacement of your car:\n";
	cin >> the_name;
	cin >> the_displacement;
	Yourcar.input(the_name, the_displacement);
	cout << "The name of your car is ";
	cout << Yourcar.get_name() << endl;
	cout << "The displacement of your car is ";
	cout << Yourcar.get_displacement() << endl;
	Car Mycar("Kuga", 2000);
	cout << "The name of my car is ";
	cout << Mycar.get_name() << endl;
	cout << "The displacement of my car is ";
	cout << Mycar.get_displacement() << endl;
	return 0;
}
Car::Car(){
	name = ""; displacement = 0;
}
Car::Car(string model_name, int model_displacement){
	name = model_name;
	displacement = model_displacement;
}
void Car::input(string model_name, int model_displacement){
	name = model_name;
	displacement = model_displacement;
}
string Car::get_name(){
	return name;
}
int Car::get_displacement(){
	return displacement;
}