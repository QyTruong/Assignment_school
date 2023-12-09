#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int arr[50];
	for (int i = 0; i < 25; i++) {
		arr[i] = pow(i * 1.0, 2);
	}
	for (int i = 0; i < 50; i++) {
		arr[i] = pow(i * 1.0, 3);
	}

	for (int i = 0; i < 50; i++) {
		cout << arr[i] << "\t";
		if ((i + 1) % 10 == 0) {
			cout << endl;
		}
	}
	system("pause");
	return 0;
}