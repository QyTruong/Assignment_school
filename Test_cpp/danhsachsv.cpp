#include<iostream>
#define MAX_SIZE 30
using namespace std;

struct NTN{
    int ngay, thang, nam;
};

struct SinhVien{
    string ten;
    NTN tg;
    double diemtoan;
};

void nhap_thongtin(SinhVien &x){
    cout << "Name: ";  cin.ignore(); getline(cin, x.ten);
    cout << "Date: "; cin >> x.tg.ngay >> x.tg.thang >> x.tg.nam;
    cout << "Mark test score: "; cin >> x.diemtoan;
}

void xuat_thongtin(SinhVien x){
    cout << "Name: " << x.ten << endl;
    cout << "Date: " << x.tg.ngay << "/" << x.tg.thang << "/" << x.tg.nam << endl;
    cout << "Mark test score: " << x.diemtoan << endl;
}

struct danhsach{
    SinhVien *arr;
    int n;
};

void nhap_ds(danhsach &ds){
    for (int i = 0; i < ds.n; i++){
        cout << "Sinh vien thu " << i+1 << " : " << endl;
        nhap_thongtin(ds.arr[i]);
    }
}

void xuat_ds(danhsach ds){
    for (int i = 0; i < ds.n; i++){
        cout << "Sinh vien thu " << i+1 << " : " << endl;  
        xuat_thongtin(ds.arr[i]);
    }
}

int main(){
    danhsach ds; 
    do {
        cout << "So luong sinh vien: ";
        cin >> ds.n;
        if (ds.n <= 0 || ds.n > MAX_SIZE)
            cout << "Vui long nhap lai!!\n";
    } while (ds.n <= 0 || ds.n > MAX_SIZE);
    ds.arr = new SinhVien[MAX_SIZE];
    cout << "\n\t\t NHAP THONG TIN CAC SINH VIEN\n";
    nhap_ds(ds);
    cout << "\n\t\t DANH SACH THONG TIN CAC SINH VIEN\n";    
    xuat_ds(ds);
    delete []ds.arr;
    return 0;
}