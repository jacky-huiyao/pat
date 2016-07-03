#include<iostream>
#include<fstream>
#include<list>
#include<string>
#include<cctype>
#include<algorithm>

using namespace std;
int main() {
//	fstream cin("pat1033.txt");
	bool shift = false;
	string str;
	list<char> clist;
	getline(cin, str, '\n');
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '+') shift = true;
		clist.insert(clist.end(), str[i]);
	}
	char ch;
	while ((ch = cin.get()) != '\n') {
		if (shift && ch >= 'A' &&ch <= 'Z') continue;
		if (find(clist.begin(), clist.end(), toupper(ch)) == clist.end())
			cout << ch;
	}
//	system("pause");
}