#include<iostream>

using namespace std;
int find(int, int);
int main() {
	int a, da, b, db,pa=0,pb=0;
	cin >> a >> da >> b >> db;
	int na = find(a, da);
	int nb = find(b, db);
	while (na--) {
		pa = 10 * pa + da;
	}
	while (nb--) {
		pb = 10 * pb + db;
	}
	cout << pa+pb<<endl;
	getchar();
	getchar();
}

int find(int a,int n) {
	int cnt = 0;
	while (a > 0) {
		if (a % 10 == n) cnt++;
		a /= 10;
	}
	return cnt;
}