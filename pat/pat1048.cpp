#include<iostream>
#include<fstream>
#include<string>
 
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int as = a.size() - 1,bs=b.size()-1;
	//if b length < a ,then fill '0'
	if (as > bs) {
		int diff = as - bs;
		string c;
		while (diff--) c += '0';
		b = c + b;
		bs = as;
	}
	for (int i=0; i<=as && i<=bs;i++) {
//		cout << b[bs - i] << "  " << a[as - i] << endl;
		if (i % 2 == 0) {
			int tmp = (b[bs-i]-'0'+ a[as-i]-'0') % 13;
			switch (tmp) {
			case 10:b[bs-i] = 'J'; break;
			case 11:b[bs-i] = 'Q'; break;
			case 12:b[bs-i] = 'K'; break;
			default:b[bs-i] = '0' + tmp; 
			}
		}
		else {
			int tmp = b[bs-i] - a[as-i];
			if (tmp < 0) tmp += 10;
			b[bs-i] = '0' + tmp;
		}
	}
	cout << b<<endl;
//	system("pause");
}