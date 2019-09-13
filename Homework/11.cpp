#include <iostream>
#include <cstring>
#include <string>
using namespace std;
struct Animal {
public:
	Animal();
	Animal(string _N, int _L);
	friend bool Equal(Animal A1, Animal A2);
	void set(string _N, int _L);
	void output();
private:
	char Name[32]1;
	int NumOfLegs;
};
int main() {
	Animal FirstAnimal("Dog", 4), SecondAnimal;
	char name[32];
	int legs;
	cout << "Please input name and number of legs of an animal:\n";
	cin >> name >> legs;
	SecondAnimal.set(name, legs);
	cout << "The name and number of legs of the two animal are:\n";
	FirstAnimal.output(); SecondAnimal.output();
	if (Equal(FirstAnimal, SecondAnimal))
		cout << "Equal\n";
	else
		cout << "Not Equal\n";
	return 0;
}
Animal::Animal() {
	Name[0] = '0'; NumOfLegs = -1;
}
Animal::Animal(string _N, int _L) {
	strcpy(Name,_N.c_str()); NumOfLegs = _L;
}
void Animal::output() {
	cout << "Name is " << Name << endl << "The number of legs is " << NumOfLegs << endl;
}
void Animal::set(string _N, int _L) {
	strcpy(Name, _N.c_str()); NumOfLegs = _L;
}
bool Equal(Animal A1, Animal A2) {
	if (strcmp(A1.Name,A2.Name)== 0 && A1.NumOfLegs == A2.NumOfLegs)
		return true;
	else
		return false;
}
