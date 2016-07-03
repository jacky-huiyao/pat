#include<iostream>
#include<fstream>

using namespace std;
int main() {
//	fstream cin("pat1038.txt");
	int n,m;
	int gra[101] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		gra[x]++;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		cout << gra[x]<<(i!=m-1?" ":"");
	}
//	system("pause");
}