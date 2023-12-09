#include<iostream>

using namespace std;

int doixung(int n) {
	int tmp = n;
	int res = 0;
	while (n) {
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res == tmp;
}
int main() {
	int n; cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int it : a) {
		if (doixung(it)) cout << it <<" ";
	}
	cout << endl;
	system("pause");
	return 0;
}
