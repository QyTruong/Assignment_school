#include<iostream>

using namespace std;

void printMenu();

void nhap(int a[], int n);
void xuat(int a[], int n);

void xoa(int a[], int& n, int x);
void pos_max(int a[], int n);
void count_neg(int a[], int n);
void max_neg(int a[], int n);
void min_pos(int a[], int n);
void look_up(int a[], int n, int x);
void count_x(int a[], int n, int x);


int main(){
    int n,x,p, y,choice;
    do {
        cout << "Nhap so phan tu: ";
        cin >> n;
        if (n <= 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (n <= 0);
    int arr[n];
    nhap(arr,n);

    printMenu();
    do {
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        switch (choice)
        {
        case 0:{
            cout << "Cam on ban vi da su dung chuong trinh!" << endl;
            break;
        }

        case 1:{
            cout << "1. Xuat mang" << endl;
            xuat(arr,n);
            break;
        }
        case 2:{
            cout << "2. Xoa phan tu tai vi tri x trong mang" << endl;
            cout << "Ban muon phan tu tai vi tri: ";
            cin >> x;
            xoa(arr,n,x);
            cout << "Da xoa thanh cong!" << endl;
            break;
        }
        case 3:{
        	cout << "3. Liet ke nhung phan tu co gia tri lon nhat trong mang" << endl;
            pos_max(arr,n);
            break;
        }
        case 4:{
        	cout << "4. Liet ke nhung phan tu co gia tri nho nhat trong mang" << endl;
            min_pos(arr,n);
            break;
        }
        case 5:{
        	cout << "5. Dem so phan tu co gia tri am trong mang" << endl;
            count_neg(arr,n);
            break;
        }
        case 6:{
            cout << "6. Cho biet gia tri am lon nhat trong mang" << endl;
            max_neg(arr,n);
            break;
        }
        case 7:{
        	cout << "7. Cho biet gia tri duong nho nhat trong mang" << endl;
            min_pos(arr,n);
            break;
        }
        case 8:{
        	cout << "8. Tim phan tu co gia tri bang x co hay khong trong mang" << endl;
            cout << "Ban muon tim so nao: ";
            cin >> p;
            look_up(arr,n,p);
            break;
        }
        case 9:{
            cout << "9. Dem so phan tu co gia tri bang x trong mang" << endl;
            cout << "Ban muon biet so luong cua gia tri nao trong mang: ";
            cin >> y;
            count_x(arr,n,y);
            break;
        }
        default:
            cout << "Lua chon vua roi khong hop le!" << endl;
            break;
        }

    } while (choice != 0);
    

    return 0;
}

void printMenu() {
	cout << "\n--------------------------------------------------" << endl;
	cout << "1. Xuat mang" << endl;
	cout << "2. Xoa phan tu tai vi tri x trong mang" << endl;
	cout << "3. Liet ke nhung phan tu co gia tri lon nhat trong mang" << endl;
	cout << "4. Liet ke nhung phan tu co gia tri nho nhat trong mang" << endl;
	cout << "5. Dem so phan tu co gia tri am trong mang" << endl;
	cout << "6. Cho biet gia tri am lon nhat trong mang" << endl;
	cout << "7. Cho biet gia tri duong nho nhat trong mang" << endl;
	cout << "8. Tim phan tu co gia tri bang x co hay khong trong mang" << endl;
	cout << "9. Dem so phan tu co gia tri bang x trong mang" << endl;
	cout << "--------------------------------------------------" << endl;
}

void nhap(int a[], int n){
    for (int i = 0; i < n; i++){
        cout << "Gia tri thu: " << i+1 << " : ";
        cin >> a[i];
    }
}

void xuat(int a[], int n){
    cout << "Cac gia tri trong mang hien co: ";
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void xoa(int a[], int& n, int p){
    for (int i = p-1; i < n; i++){
        a[i] = a[i+1];
    }
    n--;
}

void pos_max(int a[], int n){
    int max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] >= max){
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++){
        if (a[i] == max) {
            cout << "So lon nhat nam o vi tri thu: " << i+1 << endl;
        }
    }

}

void pos_min(int a[], int n){
    int min = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] < min){
            cout << "So nho nhat nam o vi tri thu: " << i+1 << endl;     
        }
    }
}

void count_neg(int a[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            count++;
        }
    }
    cout << "Co " << count << " so am trong mang" << endl;
}

void max_neg(int a[], int n){
    int tmp = a[0];
    for (int i = 0; i < n; i++){
        if ((a[i] < 0 && tmp >= 0) || (a[i] < 0 && a[i] > tmp)){
            tmp = a[i];
        }
    }
    cout << tmp << endl;
}

void min_pos(int a[], int n){
    int tmp = a[0];
    for (int i = 0; i < n; i++){
        if ((a[i] > 0 && tmp <= 0) || (a[i] > 0 && a[i] < tmp)){
            tmp = a[i];
        }
    }
    cout << tmp << endl;
}

void look_up(int a[], int n, int x){
    bool flg = false;
    for (int i = 0; i < n; i++){
        if (a[i] == x){
            flg = true;
            break;
        }
    }
    if (flg == true) cout << "YES";
    else cout << "NO"; 
    cout << endl;
}

void count_x(int a[], int n, int x){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == x) count++;
    }
    if (count == 0) cout << "Khong co";
    else cout << "Co " << count << " so trung voi gia tri " << x << " trong mang!";
    cout << endl;
}