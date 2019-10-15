#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
 
using namespace std;
 
bool arr[105];
int te[105];
 
int main() {
	int n;
	string s;
	int flag = 0;
	int k = 0;
	cin >> n >> s;
	for (int i = 0;i < 100;++i) {
		for (int j = 0;j < n;++j) {
			if (s[j] == 'B'&&arr[j]==false) {
				int cnt = 1;
				arr[j] = true;
				for (int k = j + 1;k < n;++k) {
					if (s[k] == 'B') {
						cnt++;
						arr[k] = true;
					}
					else {
						break;
					}
				}
				te[flag] = cnt;
				flag++;
			}
		}
	}
	printf("%d\n", flag);
	for (int i = 0;i < flag;++i) {
		printf("%d ", te[i]);
	}
	cout<<endl;
 
	return 0;
 
}
