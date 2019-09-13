#include<iostream>
#include<cstring>
using namespace std;
class Animal
{
private:
	char* Name;
	int MaxLength;
	int NumOfLegs;
public:
	Animal();
	Animal(const char _N[], const int _L);
	Animal(const Animal& _Ani);
	~Animal();
	friend istream& operator >>(istream& inn, Animal& d);
	friend ostream& operator <<(ostream& ouu, Animal& d);
	friend bool operator ==(Animal& x,  Animal& X2);
};
int main()
{
	Animal FirstAnimal("Dog", 4), SecondAnimal;
	cin >> SecondAnimal;
	Animal ThirdAnimal = SecondAnimal;
	cout << FirstAnimal;
	cout << SecondAnimal;
	cout << ThirdAnimal;
	if (FirstAnimal == ThirdAnimal)
	{
		cout << "equal";
	}
	else
		cout << "They are not equal!";
	system("pause");
	return 0;

}
Animal::Animal() :MaxLength(32)
{
	Name = new char[MaxLength + 1];
	strcpy(Name, " ");
	NumOfLegs = -1;

}
Animal::Animal(const char _N[], const int _L)
{
	MaxLength = strlen(_N);
	Name = new char[MaxLength + 1];
	strcpy(Name, _N);
	NumOfLegs = _L;
}
Animal::Animal(const Animal& _Ani)
{
	MaxLength = strlen(_Ani.Name);
	Name = new char[MaxLength + 1];
	strcpy(Name, _Ani.Name);
	NumOfLegs = _Ani.NumOfLegs;
}
Animal::~Animal()
{
	delete[] Name;
}
istream& operator >>(istream& inn, Animal& d)
{
	inn.get(d.Name, 32);
	inn >> d.NumOfLegs;
	return inn;
}
ostream& operator <<(ostream& ouu, Animal& d)
{
	ouu << "name is" << d.Name << endl;
	ouu << "Dog, number of legs is " << d.NumOfLegs << endl;
	return ouu;
}
bool operator ==(Animal& x, Animal& X2)
{
	return (x.Name == X2.Name&&x.NumOfLegs == X2.NumOfLegs);
}