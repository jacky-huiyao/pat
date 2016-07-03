#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	m = m % n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < m; i++) {
		int j = i + m;
		if(j<n){
			for (; j < n; j += m) {
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
		else {
			j = j%n;
			int tmp = arr[j];
			arr[j] = arr[i];
			arr[i] = tmp;
		}
	}
	for (int i = 0; i < n-1; i++) {
		cout << arr[i] << " ";
	}
	cout << arr[n - 1];
	delete[] arr;
	getchar();
	getchar();
	return 0;
}