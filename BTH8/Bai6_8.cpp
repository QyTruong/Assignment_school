#include<iostream>

using namespace std;

// Nhập các giá trị vào mảng
void nhap(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> arr[i];
    }
}

// Tìm phần tử trong mảng
bool tim(const int arr[], int arrSize, int x){
    for (int i = 0; i <= arrSize; i++){
        if (arr[i] == x) {
            return true;
        }
    }
    return false;
}

// Đảo ngược thứ tự mảng
void daonguoc(int arr[], int arrSize){
    for (int i = 0; i < arrSize/2; i++){
        int tmp = arr[i];
        arr[i] = arr[arrSize-1-i];
        arr[arrSize-1-i] = tmp;
    }
}

// Xóa vị trí của phần tử trong mảng
void xoa(int arr[], int& arrSize, int p){
    for (int i = p-1; i < arrSize; i++){
        arr[i] = arr[i+1];
    }
    arrSize--;
}

// Xuất mảng
void xuat(int arr[], int arrSize){
    for (int i = 0; i < arrSize; i++){
        cout << arr[i];
        if (i < arrSize-1){
            cout << ", ";
        }
        else {
            cout << ".";
        }
    }
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
    int a[20];
    nhap(a,n);
    daonguoc(a,n); 
    xuat(a,n); cout << endl; 
    cout << "Muon tim so bao nhieu trong mang: "; cin >> x;
    if (tim(a,n,x)) cout << "Tim thay" << endl;
    else cout << "Khong tim thay" << endl;
    cout << "Muon xoa so o vi tri thu may: "; cin >> s;
    xoa(a,n,s);
    xuat(a,n);
}
