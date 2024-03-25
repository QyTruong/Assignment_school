#include<bits/stdc++.h>

using namespace std;

int main(){
	double a, b;
	do {
		system("cls");
		cout << "Nhap so1 va so2 deu lon hon 0, ma so2 > so1: ";
		cin >> a >> b;
		if (a <= 0 || b <= a){
			cout << "Vui long nhap lai!" << endl;
			system("pause");
		}
	} while (a <= 0 || b <= a);
	
	int n;
	do {
		
		cout << "Chia doan thanh bao nhieu lan?: ";
		cin >> n;
		if (n <= 0){
			cout << "Vui long nhap lai!" << endl;
			system("pause");
		}
	} while (n <= 0);
	
	double h, hcn, s = 0;
	h = (b-a)/n;
	// for (int i = 1; i <= n; i++){
	// 	hcn = h*(1/(a+(i-1)*h));
	// 	s += hcn;
	// }

	int i = 1;
	while (i <= n){
		hcn = h*(1/(a+(i-1)*h));
		s += hcn;
		i++;
	}
	cout << s;
	return 0;
}
