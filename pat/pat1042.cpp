#include<iostream>
#include<fstream>
using namespace std;
int main() {
//	ifstream in("1.txt");
	int num[26] = { 0 },max=0;
	char ch,dest_ch;
	while (cin >> ch && ch != '\n') {
		if (ch >= 'A' &&ch <= 'Z') {
			num[ch - 'A']++;
		}
		if (ch >= 'a' &&ch <= 'z') {
			num[ch - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (num[i] > max) { 
			max = num[i]; 
			dest_ch = 'a' + i;
		}
	}
	cout << dest_ch << " " << max << endl;
	getchar();
}