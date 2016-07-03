#include<iostream>

using namespace std;
int main() {
	char ch;
	int p=0, a=0, t=0;
	while ( cin.get(ch) && ch != '\n') {
		if (ch == 'P') p++;
		if (ch == 'A') a+=p;
		if (ch == 'T') t=(t+a)% 1000000007;
	}
	cout << t << endl;
//	system("pause");
}