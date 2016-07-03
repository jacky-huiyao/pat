#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	map<string, int> team;
	string str, tnum;
	int grade,tcnt,maxgrade=0;
	cin >> tcnt;
	for (int i = 0; i < tcnt; i++) {
		cin >> str>>grade;
		size_t pos = str.find_first_of('-');
		tnum = str.substr(0, pos);
		team[tnum] += grade;
		//if (team.count(tnum)==0) {
		//	team[tnum] = grade;
		//}
		//else {
		//	team[tnum] += grade;
		//}
	}
	map<string,int>::iterator it = team.begin(), it_end = team.end();
	while (it != it_end) {
		if ((*it).second > maxgrade) {
			tnum = (*it).first;
			maxgrade = (*it).second;
		}
		it++;
	}
	cout << tnum << " " << maxgrade << endl;

	getchar();
	getchar();
}