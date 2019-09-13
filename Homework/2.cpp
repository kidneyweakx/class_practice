#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str1, str2,str3;
	cout << "Enter str1 and str2\n";
	getline(cin,str1);
	getline(cin,str2);
	if(str1==str2)
    	cout << "Equal\n";
	else
		cout << "Not Equal\n";
	int n=str1.find(str2);
	if(n>=0&&n<str1.length())
		cout <<"The first string contains the second string\n";
	else
	    cout <<"The first string does not contain the second string\n";
	str3=str2;
	str1+=str3;
	cout << "The concatenated string is " << str1 << endl;
	return 0;
}
