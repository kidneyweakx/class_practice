#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1,*s2;
	cout <<"Enter the value of s1.\n";
	cin >> s1;
    *s2=s1;
	cout <<"The value s1 and s2 are:\n";
	cout<<s1<<endl<<s2<<endl;
	s2=new string;
	cout<<"Enter the value of s2.\n";
	cin>>*s2;
	cout<<"The value s1 and s2 are:\n";
	cout<<s1<<endl<<s2<<endl;
	return 0;
 } 
