#include <iostream>
#include <string>
#include <vector>
using namespace std;
int horner_rule(vector<int > coef, int x) {
	int sum = 0;
	for (int i = 0; i<coef.size(); i++)
		sum = sum * x + coef[i];
	return(sum);
}
int main() {
	int number, x, t,next;
	vector<int> coef;
	cout << "Number of coefficient is:";
	cin >> number; // reads number of non-zero coeffecient from STDIN 

	cout << "x is:";
	cin >> x;     // read x from STDIN 

	for (int i = 0; i<number; i++) {
		t = number - i - 1;
		cout << "x^$t'th coefficient is:";
		cin >> next; 
		coef.push_back(next); // reads ith coefficient from STDIN 
	}

	int result = horner_rule(coef, x);
	cout << "Sum is:" << result << endl;
	return 0;
}