#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
struct Diary {
	int y, m, d;
	string data;
};
class DiaryBook {
public:
	DiaryBook();
	DiaryBook(char _n[]);
	DiaryBook(const DiaryBook& n);
	~DiaryBook();
	void InputName(const char N[]);
	void InputDiary(Diary& OneDiary);
	void output();
	void operator = (const DiaryBook& a);
	friend bool operator ==(const DiaryBook& d1, const DiaryBook& d2);
private:
	char* Name;
	vector<Diary> Diaries;
};
int main() {
	int i;
	DiaryBook x;
	x.InputName("Tom");
	Diary token;
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
		char line;
		do
		{
			cin.get(line);
		} while (line != '\n');
		getline(cin, token.data);
		x.InputDiary(token);
	}
	DiaryBook y;
	char n[32];
	cout << "Please input a name for the second diary book:\n";
	cin.getline(n, 32);
	y.InputName(n);
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
		char line;
		do
		{
			cin.get(line);
		} while (line != '\n');
		getline(cin, token.data);
		y.InputDiary(token);
	}
	DiaryBook z, w;
	z = x; w = y;
	x.output(); y.output();
	z.output(); w.output();
	if (z == w)
		cout << "The two diary books are identical.";
	else
		cout << "The two diary books are not identical.";
	return 0;
}
DiaryBook::DiaryBook() {
	Name = new char[32];
	Name[0] = '0';
}
DiaryBook::DiaryBook(char _n[]) {
	Name = new char[strlen(_n)];
	strcpy(Name, _n);
}
DiaryBook::DiaryBook(const DiaryBook& n) {
	Name = new char[32];
	strcpy(Name, n.Name);
	Diaries = n.Diaries;
}
DiaryBook::~DiaryBook() {
	delete[] Name;
}
void DiaryBook::operator =(const DiaryBook& a) {
	Name = new char[32];
	Name = a.Name;
	Diaries = a.Diaries;
}
void DiaryBook::InputName(const char N[]) {
	strcpy(Name, N);
}
void DiaryBook::InputDiary(Diary& OneDiary) {
	Diaries.push_back(OneDiary);
}
void DiaryBook::output() {
	cout << "The author is " << Name << endl;
	for (int i = 0; i<Diaries.size(); i++) {
		cout << "The date of diary is " << Diaries[i].y << "." << Diaries[i].m << "." << Diaries[i].d << endl;
		cout << "Its content is " << Diaries[i].data << endl;
	}
}
bool operator ==(const DiaryBook& d1, const DiaryBook& d2) {
	for (int i = 0; i < d1.Diaries.size(); i++) {
		return(!strcmp(d1.Name, d2.Name) && d1.Diaries[i].y == d2.Diaries[i].y&&d1.Diaries[i].m == d2.Diaries[i].m&&d1.Diaries[i].d == d2.Diaries[i].d&&d1.Diaries[i].data == d2.Diaries[i].data);
	}
}