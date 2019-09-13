#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str1[512], str2[512],str3[512];
	cout << "Enter str1 and str2\n";
	cin.getline(str1, 512);
	cin.getline(str2, 512);
	int test=strcmp(str1, str2);
	if (test==0)
		cout << "Equal\n";
	else
		cout << "Not Equal\n";
	strcpy(str3, str2);
	strcat(str1, str3);
	cout << "The concatenated string is " << str1 << endl;
	return 0;
}
