#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
	string a,n;
	vector <string> str;
	ifstream fin;
	int b=0,c=0;
	fin.open("string.txt");
	if(fin.fail()){
		cout<<"Fail!\n";
		exit(1);
	} 
	while(!fin.eof()){
	getline(fin,a);
	str.push_back(a);
	b++;}
	cout<<"Enter a name:";
	cin>>n;
	for(int i=0;i<b;i++){
		int s=str[i].find(n);
		if(s>=0&&c<str[i].length())
		c++;}
	cout<<"The number of hits is "<<c<<endl;
	fin.close();
	return 0;
} 
