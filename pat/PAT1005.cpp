#include<iostream>

using namespace std;
void find(int *,int, int);
int main() {
	int n = 0;
	cin >> n;
	int *list = new int[n];
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		list[i] = tmp;
	}

	for (int i = 0; i < n; i++) {
		if (list[i] == 0) continue;
		int val = list[i];
		while (val >1) {
			if (val % 2 == 0) {
				val = val / 2;
			}
			else
			{
				val = (val * 3 + 1) / 2;
			}
			find(list, n, val);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (list[i] < list[j]) {
				int tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if(list[i]>0)
			cout << list[i]<<((i<n-1 && list[i+1])?" ":"");
		
	}
	getchar();
	getchar();
}

void find(int *arr,int size, int val) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == val) { 
			arr[i] = 0;
			return;
		}
	}
}

