#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
	Animal();
	Animal(string _N, int _L);
	friend istream& operator >>(istream& in,Animal& a2);
	friend ostream& operator <<(ostream& out,Animal& a2);
	friend bool operator ==(const Animal& a1, const Animal& a2);
private:
	string Name; 
	int NumOfLegs;
};
int main() {
	Animal FirstAnimal("Dog", 4), SecondAnimal;
	cout << "Please input name and number of legs of an animal:\n";
	cin >> SecondAnimal;
	cout << "The name and number of legs of the first animal are:\n";
	cout << FirstAnimal << endl;
	cout << "The name and number of legs of the first animal are:\n";
	cout << SecondAnimal << endl;
	if (FirstAnimal==SecondAnimal)
		cout << "They are Equal\n";
	else
		cout << "They are Not Equal\n";
	return 0;
}
Animal::Animal(){
	Name = " "; NumOfLegs = -1;
}
Animal::Animal(string _N, int _L) {
	Name = _N; NumOfLegs = _L;
}
istream& operator >>(istream& in,Animal& a) {
	in >> a.Name >> a.NumOfLegs;
	return in;
}
ostream& operator <<(ostream& out, Animal& a) {
	out << "name is " << a.Name << ", number of legs is " << a.NumOfLegs << endl;
	return out;
}
bool operator ==(const Animal& a1, const Animal& a2) {
	return(a1.Name == a2.Name&&a1.NumOfLegs == a2.NumOfLegs);
}