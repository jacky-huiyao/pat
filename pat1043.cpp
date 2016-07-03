#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
//	fstream in("1.txt");
	int pat[6] = {0};
	char dest[6] = {'P','A','T','e','s','t'};
	int max=0;
//	cout << str << endl;
	char ch;
	while(cin>>ch && ch!='\n') {
		switch (ch) {
		case 'P':
		{pat[0]++;  break;}
		case 'A':
		{pat[1]++;  break; }
		case'T':
		{pat[2]++; break; }
		case 'e':
		{pat[3]++; break; }
		case 's':
		{pat[4]++;  break; }		
		case 't':
		{pat[5]++; break; }
		default:
			break;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (pat[i] > max) max = pat[i];
	}
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 6; j++) {
			if (pat[j]) {
				pat[j]--;
				cout << dest[j];
			}
		}
	}
	
	getchar();
	getchar();
}