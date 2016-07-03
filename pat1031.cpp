#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	vector<string> vec;
	string str;
	int n;
	bool flag=false;
	char Z[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
	int weight[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		int len = str.size(),sum=0;
		if (len != 18) { vec.push_back(str); continue; }
		for (int j = 0; j < len-1; j++){
			if (str[j] >= '0' && str[j] <= '9') {
				sum += weight[j] * (str[j] - '0');
				if (j==16 && Z[sum % 11] != str[17]) {
					vec.push_back(str);
				}
			}
			else{
				vec.push_back(str); break;
			}
		}	
	}
	if(vec.empty()){
		cout << "All passed" << endl;
	}
	else {
		while (!vec.empty()) {
			cout<<vec.front()<<endl;
			vec.erase(vec.begin());
		}
	}
	getchar();
	getchar();
}