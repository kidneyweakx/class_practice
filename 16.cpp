#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
void BMI(double a[], double b[],double bmi[],int p);
int main()
{
	ifstream in;
	int p=0;
	string num;
	double h[10], w[10],B[10];
	in.open("height.txt");
	if (in.fail()) {
		cout << "Fail!!\n";
		exit(1);
	}
	cout <<"Read file height\n";
	while (getline(in,num,'\n')) {
		h[p]=atof(num.c_str());
		p++;
	}
	in.close();
	p =0;
	in.open("weight.txt");
	if (in.fail()) {
		cout << "Fail!!\n";
		exit(1);
	}
	cout <<"Read file weight\n";
	while (getline(in,num,'\n')) {
		w[p]=atof(num.c_str());
		p++;
	}
	in.close();
	BMI(h, w,B,p);
	return 0;
}
void BMI(double a[], double b[],double bmi[],int p)
{
	for (int f = 0; f < p; f++) {
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		bmi[f] = b[f] / (a[f]*a[f]);
		cout << f+1<<"person BMI:"<<bmi[f]<<endl;
	}

}
