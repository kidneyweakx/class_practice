#include <iostream>
using namespace std;
int main() {
	int a[4][4] = { 1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4 },total=0;
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			cout << "i =" << i << endl;
			if ((i + j) > 5) break;
			cout << "j =" << j << endl;
			cout << a[i][j] << endl;
			total += a[i][j];
		}
	cout << total << endl;
	return 0;
}