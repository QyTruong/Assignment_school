#include<iostream>

using namespace std;

const int MAX_SIZE = 10;

// Nhập số chỗ ngồi cho từng phòng
void NhapMang(long a[], long n){
    for (int i = 0; i < n; i++){
        cout << "So cho ngoi cua phong thu " << i+1 << " : ";
        cin >> a[i];
    }
}

// Xuất ra danh sách các phòng
void XuatMang(const long a[], long n){
    cout << "\nPhong\tSL Cho Ngoi\n";
    for (int i = 0; i < n; i++){
        cout << i+1 << "\t" << a[i] << endl;
    }
}

// In ra các phòng trong phạm vi và trả về số lượng phòng hợp lệ
long PhamVi(const long a[], long n, long min, long max){
    long cnt = 0;
    for (int i = 0; i < n; i++){
        if (a[i] >= min && a[i] <= max){
            cnt++;
        }    
    }
    if (cnt == 0) return 0;
    else {
        cout << "Co " << cnt << " phong hop le!\n";
        cout << "Nhung phong hop le!";
        cout << "\nPhong\tSL Cho Ngoi\n";
        for (int i = 0; i < n; i++){
            if (a[i] >= min && a[i] <= max){
                cout << i+1 << "\t" << a[i] << endl;
            }
        }
    }
    return cnt;
}

// Tìm phòng có số chỗ ngồi ít nhất
long GiaTriMin(const long a[], long n){
    long min = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] < min) min = a[i];
    }
    return min;
}

int main(){
	// Theo đề bài có tối đa 10 phòng
    long choice, n = 10;
    long a[MAX_SIZE];
	// Buộc người dùng phải khởi tạo các phòng trước
    NhapMang(a,n);
    cout << "==========MENU==========\n"
        << "1 -So cho ngoi it nhat\n"
        << "2 -In danh sach cac phong hoc và cho ngoi\n"
        << "3 -Phong hoc co so cho ngoi trong pham vi [x,y]\n"
        << "4 -In so cho ngoi cua n phong dau tien\n"
        << "5 -Thoat chuong trinh\n";
    
    do {
        cout << ">> Chuc nang: ";
        cin >> choice;
        switch (choice){
        case 1: {
            cout << "Chuc nang: -So cho ngoi it nhat\n";
            cout << "Phong co so cho ngoi it nhat la: " << GiaTriMin(a,n) << " cho!\n";
            break;
        }
        case 2: {
            cout << "Chuc nang: -In danh sach cac phong hoc và cho ngoi\n";
            cout << "So cho cho ngoi tuong ung voi cac phong";
            XuatMang(a,n);
            break;
        }
        case 3:{
            long x,y;
            do {
                cout << "Nhap pham vi so phong x va y: \n";
                cout << "Vi tri bat dau: ";
                cin >> x;
                cout << "Vi tri ket thuc: ";
                cin >> y;
                if (x>y) cout << "Vui long nhap lai!\n";
            } while (x>y);
            
            if (!PhamVi(a,n,x,y)) cout << "Khong co phong hop le!\n";  
            break;
        }
        case 4: {
            cout << "Chuc nang: -In so cho ngoi cua n phong dau tien\n";
            long dautien;
            do {
                cout << "So phong hoc dau tien can xet: "; 
                cin >> dautien;
                if (dautien <= 0 || dautien > n){
                    cout << "Vui long nhap lai!\n";
                }
            } while (dautien <= 0 || dautien > n);
            cout << "So cho ngoi cua " << dautien << " phong dau tien gom:";
            XuatMang(a,dautien);
            break;
        }
	case 5: {
            cout << "Cam on ban vi da su dung chuong trinh!\n";
            break;
        }
        default:
            cout << "Lua chon vua roi khong hop le! \n";
            break;
        }

    } while (choice != 5);
    
    return 0;
}
