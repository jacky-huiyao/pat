#include<iostream>
#include<cmath>
using namespace std;

int sushudui(int n);
int main() {
	int n;
	cin >>n;
	cout << sushudui(n);
	getchar();
	getchar();
}

int sushudui(int n) {
	int cnt=0,last = 2;
	for (int i =3 ; i <= n; i++) {
		int j = 2;
		for (; j <= sqrt(i);j++) {
			if (i%j == 0) break;
		}
		if (j > sqrt(i)) {
			if (2==i-last) {
				cnt++;
			}
			last = i;
		}
	}
	return cnt;
}