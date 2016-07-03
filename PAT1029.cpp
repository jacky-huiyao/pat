#include<iostream>
#include<fstream>
#include<string>
#include<list>
#include<cctype>
#include<algorithm>
using namespace std;
int main() {
//	fstream cin("pat1029.txt");
	string str1,str2;
	list<char> clist;
	int i=0, j=0;
	getline(cin, str1, '\n');
	getline(cin, str2, '\n');
//	cout << str1 << "   " << str2<<endl;
	while (i < str1.size()) {
		if (str1[i] == str2[j]) {
			j++;
		}
		else if (find(clist.begin(), clist.end(), toupper(str1[i])) != clist.end()) {
			i++;
			continue; 
		}
		else {
			if (str1[i] >= 'a' && str1[i] <= 'z') clist.insert(clist.end(),toupper(str1[i]));
			else
				clist.insert(clist.end(),str1[i]);
		}
		i++;
	}
	while (!clist.empty()) {
		cout << clist.front();
		clist.pop_front();
	}
//	system("pause");
}
