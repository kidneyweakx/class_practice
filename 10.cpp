#include<iostream>
#include<string>
#include<fstream>
#include<cstring> 
using namespace std;

int main()
{
 string *str,name;
 ifstream fin;
 int n=0,n1=0;
 fin.open("strings.txt");
 
 if(fin.fail())
 {
  cout << "fail";
  exit(1);
 }
 while(!fin.eof())
 {
getline(fin,name);
  n++;
 }
 fin.close();
 str=new string[n];
 fin.open("string.txt");
 for(int i=0;i<n;i++)
 {
  getline(fin,str[i]);
 }
 cin >> name;
 for(int i=0;i<n;i++)
 {
  if(str[i].find(name)!=string::npos)
  {
   n1++;
  }
 }
 cout << n1;
 system("pause");
 return 0;
}
