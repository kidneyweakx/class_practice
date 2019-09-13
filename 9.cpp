#include <iostream>
#include <string>
using namespace std;
struct Car{
	string name;
	int displacement;
};
struct PersonInfo{
	string name;
	Car OwnCar;
};
int main()
{
	PersonInfo You;
	cout<<"Please input your name and data about your car:\n";
	cin>>You.name>>You.OwnCar.name>>You.OwnCar.displacement;
	cout<<"Your name is "<<You.name<<endl;
	cout<<"The name of your car is "<<You.OwnCar.name<<endl;
	cout<<"The displacement of your car is "<<You.OwnCar.displacement<<endl;
	return 0;
 } 
