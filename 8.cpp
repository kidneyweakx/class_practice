#include <iostream>
#include <string>
using namespace std;
struct Car{
	string name;
	int displacement;
};
int main()
{
	Car YouCar;
	cout<<"Please input the name and displacement of your car:\n";
	cin>>YouCar.name>>YouCar.displacement;
	cout<<"The name of your car is "<<YouCar.name<<endl;
	cout<<"The displacement of your car is "<<YouCar.displacement<<endl;
	return 0;
 } 
