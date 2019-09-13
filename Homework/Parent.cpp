#include <iostream>
using namespace std;
class Parent {
private:
	int ParentValue;
public:
	Parent();
	virtual int Get_Value();
	void PrintValue();
};
class ChildOne :public Parent {
private:
	int ChildOneValue;
public:
	ChildOne();
	int Get_Value();
};
class ChildTwo :public Parent {
private:
	int ChildTwoValue;
public:
	ChildTwo();
	int Get_Value();
};
int main() {
	Parent p;
	ChildOne a;
	ChildTwo b;
	p.PrintValue();
	a.PrintValue();
	b.PrintValue();
	return 0;
}
Parent::Parent() {
	ParentValue = 100;
}
int Parent::Get_Value() {
	return ParentValue;
}
void Parent::PrintValue() {
	cout << Get_Value() << endl;
}
ChildOne::ChildOne() {
	ChildOneValue = 200;
}
int ChildOne::Get_Value() {
	return ChildOneValue;
}
ChildTwo::ChildTwo() {
	ChildTwoValue = 300;
}
int ChildTwo::Get_Value() {
	return ChildTwoValue;
}

