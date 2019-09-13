#include <iostream> 
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream fout;
	string a,b;
	cout<<"Enter 2 string\n";
	getline(cin,a);
	getline(cin,b);
	fout.open("outfile.txt");
	if(fout.fail()){
		cout<<"Error!";
		exit(1);
	}
	cout<<"Write outfile";
	a=a+b;
	fout<<b+a;
	fout.close();
	return 0;	
}
