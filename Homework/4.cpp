#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vec;
	cout << "Please enter five numbers:\n";
	int next;
	for (int n = 0; n < 5; n++)
	{
		cin >> next;
		vec.push_back(next);
	}
	cout << "Five numbers you entered;\n";
	for (unsigned int i=0;i<vec.size();i++)
	{
		cout << vec[i]<<endl;
	}
	return 0;
}
