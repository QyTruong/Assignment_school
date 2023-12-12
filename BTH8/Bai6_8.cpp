#include<iostream>

using namespace std;

// Nhập các giá trị vào mảng
void nhap(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> arr[i];
    }
}

// Xuất mảng
void xuat(const int arr[], int arrSize){
    for (int i = 1; i <= arrSize; i++){
        cout << arr[i];
        if (i < arrSize){
            cout << ", ";
        }
    }
}

// Tìm phần tử trong mảng
bool tim(const int arr[], int arrSize, int x){
    int tmp;
    for (int i = 0; i <= arrSize; i++){
        if (arr[i] == x) {
            tmp = i;
            return true;
        }
    }
    if (tmp >= 0){
        return true;
    }
    else {
        return false;
    }
}

// Đảo ngược thứ tự mảng
void daonguoc(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        int tmp = arr[i];
        arr[i] = arr[arrSize];
        arr[arrSize] = tmp;
        arrSize--;
    }
}

// Xóa vị trí của phần tử trong mảng
void xoa(int arr[], int& arrSize, int p){
    for (int i = p-1; i < arrSize; i++){
        arr[i] = arr[i+1];
    }
    arrSize--;
}

int main(){
    int x,s;
    int n;
    do {
	    cout << "Nhap so phan tu cho mang: ";
	    cin >> n;
	    if (n <= 0){
	        cout << "Vui long nhap lai!" << endl;
	    } 
    } while (n <= 0);
    int a[n];
    nhap(a,n);
    daonguoc(a,n); 
    xuat(a,n); cout << endl; 
    cout << "Muon tim so bao nhieu trong mang: "; cin >> x;
    if (tim(a,n,x)) cout << "Tim thay" << endl;
    else cout << "Khong tim thay" << endl;
    cout << "Muon xoa so o vi tri thu may: "; cin >> s;
    xoa(a,n,s+1);
    xuat(a,n);
}
