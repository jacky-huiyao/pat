#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int bai = n / 100;
	int shi = n % 100 / 10;
	int ge = n % 10;
	while (bai--) {
		cout << 'B';
	}
	while (shi--) {
		cout << 'S';
	}
	for (int i = 1; i <= ge; i++) {
		cout << i;
	}
	getchar();
	getchar();
}