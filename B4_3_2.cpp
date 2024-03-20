#include<iostream>
#define MAX_SIZE 30

using namespace std;

int main(){
	int n; 
	do {
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if  (n <= 0 || n > MAX_SIZE)
			cout << "Vui long nhap lai!!\n";
	} while (n <= 0 || n > MAX_SIZE);

	int *a = new int [n];
	for (int i = 0; i < n; i++){
		cin >> *(a+i);
	}
	cout << "Cac phan tu la so le: ";
	for (int i = 0; i < n; i++){
		if (*(a+i) % 2 == 1){
			cout << *(a+i) << " ";
		}
	}
	cout << endl;
	cout << "Phan tu lon nhat trong mang: ";
	int max = *a;
	for (int i = 0; i < n; i++){
		if (*(a+i) > max)
			max = *(a+i);
	}
	cout << max;
	delete []a;
	return 0;
}