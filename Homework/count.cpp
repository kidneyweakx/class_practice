#include <iostream>
using namespace std;
int main() {
	int x = 1;
	int i = 1;
	cout << "Start";
	while (x <= 1000) {
		x = 2 ^ x;
		i = i + 1;
	}
	cout <<"ans = "<<i;
	return 0;
}