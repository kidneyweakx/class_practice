#include <iostream>
using namespace std;
namespace PizzaSpace{
	class Pizza{
	private:
		float radius, unit_price, price;
	public:
		Pizza();
		Pizza(float _r, float _p);
		void output();
		void set(float _r, float _p);
		friend bool operator ==(Pizza& P1, Pizza& P2);
	};
}
int main()
{
	using namespace PizzaSpace;
	float r, p;
	Pizza MyPizza(10, 320), YourPizza;
	cout << "Please input the radius and price of your pizza:\n";
	cin >> r >> p;
	YourPizza.set(r, p);
	MyPizza.output();
	YourPizza.output();
	if (MyPizza == YourPizza)
		cout << "Equal\n";
	else
		cout << "Not Equal\n";
	return 0;
}
namespace PizzaSpace
{
	Pizza::Pizza() {
		radius = 0;
		unit_price = 0;
		price = 0;
	}
	Pizza::Pizza(float _r, float _p) {
		radius = _r; price = _p;
		unit_price = _p / (_r * _r*3.14);
	}
	void Pizza::output() {
		cout << "The radius of this pizza is " << radius << endl;
		cout << "The price of this pizza is " << price << endl;
		cout << "The unit price of this pizza is " << unit_price << endl;
	}
	void Pizza::set(float _r, float _p) {
		radius = _r; price = _p;
		unit_price = _p / (_r * _r*3.14);
	}
	bool operator ==(Pizza& P1, Pizza& P2) {
		return(P1.unit_price == P2.unit_price);
	}
}
