#include<iostream>

using namespace std;

// Tìm vị trí xuất hiện đầu tiên của phần tử nhỏ nhất trong mảng
long order_min(int arr[], int size){
	int i, vtmin = 0, min = arr[0];
	for (i = 1; i < size; i++){
		if (arr[i] < min){
			min = arr[i];
			vtmin = i;
		}
	}
	return vtmin;
}

int main(){
	int n;
	do {
	    cout << "Nhap so phan tu cho mang: ";
	    cin >> n;
	    if (n <= 0){
	        cout << "Vui long nhap lai!" << endl;
	    } 
    	} while (n <= 0);
	int a[n];
	for (int i = 0; i < n; i++){
	     cout << "Vi tri thu " << i << " trong mang: ";
	     cin >> a[i];
	}
	int kq = order_min(a,n);
	cout << "Phan tu nho nhat xuat hien dau tien trong mang nam o vi tri thu: " << kq;
}
