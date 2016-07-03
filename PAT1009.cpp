#include<iostream>
#include<string>
#include<list>
using namespace std;


int main() {
	string str;
	list<string> list;
	getline(cin, str);
	int len = str.size(),last_index=0,count=0;
	for (int i = 0; i < len; i++) {
		count++;
		if (str[i] == ' ') {
			list.push_back(str.substr(last_index, count-1));
			last_index = ++i;
			count = 0;
		}
	}
	list.push_back(str.substr(last_index));
	

	while (list.size()>1) {
		cout << list.back()<<" ";
		list.pop_back();
	}
	cout << list.back();
	getchar();
	getchar();
}