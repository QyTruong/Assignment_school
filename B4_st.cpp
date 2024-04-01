/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

#define MAX_SIZE 45

// Struct
struct SinhVien{
    string mssv;
    string ho_ten;
    string dia_chi;
    int nam_sinh;
    double diem_toan;
    double diem_van;
    double diem_ngoaingu;
};

// Hàm
void inp(SinhVien a[], int& n);
void outp(SinhVien a[], int x);
double diemtb(SinhVien diem);
void xeploai(SinhVien a[], int n);
void outp_diem(SinhVien a[], int x);


int main()
{
    SinhVien sv[MAX_SIZE];
    int n,x;
    inp(sv,n);

    cout << "Ban muon xem thong tin cua sinh vien thu: ";
    cin >> x;
    outp_diem(sv,x-1);
    return 0;
}


void inp(SinhVien a[], int& n){
    // Nhập số lượng sinh viên
    do {
        cout << "Nhap so luong hoc sinh: ";
        cin >> n;
        if (n <= 0 || n > MAX_SIZE)
            cout << "Nhap lai!!\n";
    } while (n <= 0 || n > MAX_SIZE);
    
    printf("\tDanh sach voi %d sinh vien\t\n", n);
    for (int i = 0; i < n; i++){
        printf("Sinh vien thu %d:\n", i+1);
        // Thông tin cá nhân
        cout << "Ma so sinh vien: ";
        cin >> a[i].mssv;
        cin.ignore();
        cout << "Ho va ten: ";
        getline(cin,a[i].ho_ten);
        cout << "Dia chi: ";
        getline(cin,a[i].dia_chi);
        cout << "Nam sinh: ";
        cin >> a[i].nam_sinh;
        
        // Điểm môn học
        cout << "Diem toan: ";
        cin >> a[i].diem_toan;
        cout << "Diem van: ";
        cin >> a[i].diem_van;
        cout << "Diem ngoai ngu: ";
        cin >> a[i].diem_ngoaingu;
    }
}

// void outp(SinhVien a[], int n){
//     printf("\tDanh sach thong tin voi %d sinh vien\t\n", n);
//     for (int i = 0; i < n; i++){
//         printf("Sinh vien thu %d:\n", i+1);
//         // Xuất thông tin cá nhân
//         cout << "Ma so sinh vien: " << a[i].mssv << endl;
//         cout << "Ho va ten: " << a[i].ho_ten << endl;
//         cout << "Dia chi: " << a[i].dia_chi << endl;
//         cout << "Nam sinh: " << a[i].nam_sinh << endl;
        
//         // Xuất điểm môn học
//         cout << "Diem toan: " << a[i].diem_toan << endl;
//         cout << "Diem van: " <<  a[i].diem_van << endl;
//         cout << "Diem ngoai ngu: " << a[i].diem_ngoaingu << "\n\n";
//     }
// }

void outp(SinhVien a[], int x){
    
        printf("Sinh vien thu %d:\n", x);
        // Xuất thông tin cá nhân
        cout << "Ma so sinh vien: " << a[x].mssv << endl;
        cout << "Ho va ten: " << a[x].ho_ten << endl;
        cout << "Dia chi: " << a[x].dia_chi << endl;
        cout << "Nam sinh: " << a[x].nam_sinh << endl;
        
        // Xuất điểm môn học
        cout << "Diem toan: " << a[x].diem_toan << endl;
        cout << "Diem van: " <<  a[x].diem_van << endl;
        cout << "Diem ngoai ngu: " << a[x].diem_ngoaingu << "\n\n";

}

double diemtb(SinhVien diem){
    double dtb;
    dtb = ((diem.diem_toan + diem.diem_van) * 2 + diem.diem_ngoaingu) / 5;
    return dtb;
}

void xeploai(SinhVien x){
        if (diemtb(x) >= 8 && diemtb(x) <= 10)
            cout << "Gioi\n";
        else if (diemtb(x) >= 6.5 && diemtb(x) < 8)
            cout << "Kha\n";
        else if (diemtb(x) >= 5 && diemtb(x) < 6.5)
            cout << "TB\n";
        else 
            cout << "Duoi TB\n";
}

void outp_diem(SinhVien a[], int x){
    cout << "\tThong tin cua sinh vien thu x\n";
    cout << "Ma so sinh vien: " << a[x].mssv << endl;
    cout << "Ho va ten: " << a[x].ho_ten << endl;
    cout << "Diem trung binh: " << diemtb(a[x]) << endl;
    xeploai(a[x]);
}