#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
struct Diary {
	int y, m, d;
	string data;
};
struct DiaryBook {
	char author[32];
	vector<Diary> indata;
};
int main() {
	int i;
	DiaryBook x;
	Diary token;
	cout << "Please input your name:\n";
	cin >> x.author;
	cout << "How many diaries do you want to input?\n";
	cin >> i;
	for (int n = 0; n < i; n++) {
		cout << "Please input diary #" << n << ":\n";
		cout << "which year?\n";
		cin >> token.y;
		cout << "which month?\n";
		cin >> token.m;
		cout << "which day?\n";
		cin >> token.d;
		cout << "the content?\n";
		getline(cin, token.data);
		x.indata.push_back(token);
	}
	for (int n = 0; n < i; n++) {
		cout << "Your name is" << x.author;
		cout << "The date of diary #" << n << " is ";
		cout << x.indata[n].y << "." << x.indata[n].m << "." << x.indata[n].d << endl;
		cout << "Its content is " << x.indata[n].data << endl;
	}
	return 0;
}
