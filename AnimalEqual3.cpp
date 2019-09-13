#include <iostream>
#include <cstring>
using namespace std;
class Animal {
public:
	Animal();
	Animal(const char _N[],const int _L);
	Animal(const Animal& _Ani);
	~Animal();
	friend istream& operator >>(istream& in, Animal& a2);
	friend ostream& operator <<(ostream& out, Animal& a2);
	friend bool operator ==(Animal& a1, Animal& a2);
private:
	char* Name;
	int MaxLength;
	int NumOfLegs;
};
int main() {
	Animal FirstAnimal("Dog", 4), SecondAnimal;
	cout << "Please input name and number of legs of an animal:\n";
	cin >> SecondAnimal;
	Animal ThirdAnimal = SecondAnimal;
	cout << "The name and number of legs of the first animal are:\n";
	cout << FirstAnimal << endl;
	cout << "The name and number of legs of the second animal are:\n";
	cout << SecondAnimal << endl;
	cout << "The name and number of legs of the third animal are:\n";
	cout << ThirdAnimal << endl;
	if (FirstAnimal == SecondAnimal)
		cout << "They are Equal\n";
	else
		cout << "They are Not Equal\n";
	return 0;
}
Animal::Animal() {
	MaxLength = 32;
	Name = new char[MaxLength + 1];
	strcpy(Name, " "); NumOfLegs = -1;
}
Animal::Animal(const char _N[], const int _L) {
	MaxLength = strlen(_N);
	Name = new char[MaxLength + 1];
	strcpy(Name, _N); NumOfLegs = _L;
}
Animal::Animal(const Animal& _Ani) {
	MaxLength = strlen(_Ani.Name);
	Name = new char[MaxLength + 1];
	strcpy(Name, _Ani.Name);NumOfLegs = _Ani.NumOfLegs;
}
Animal::~Animal() {
	delete [] Name;
}
istream& operator >>(istream& in, Animal& a2) {
	in.get(a2.Name, 32);
	in >>a2.NumOfLegs;
	return in;
}
ostream& operator <<(ostream& out, Animal& a2) {
	out << "name is " << a2.Name << ", number of legs is " << a2.NumOfLegs << endl;
	return out;
}
bool operator ==(Animal& a1,Animal& a2) {
	return(a1.Name == a2.Name&&a1.NumOfLegs == a2.NumOfLegs);
}