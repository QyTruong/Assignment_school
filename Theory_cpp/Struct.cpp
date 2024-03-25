// ==================================== STRUCT =================================
#include<iostream>
#include<iomanip>

using namespace std;

//==========================
// Ten, gpa, dia chi, msv
// struct ten_struct{
//     //member
// }; 
//==========================

struct sinhvien{
    string msv;
    string ten;
    double gpa;
    string dia_chi;

    // Constructor (hàm khởi tạo) <Khởi tạo giá trị mặc định>
    sinhvien(){
        msv = "abcd";
        ten = "Truong ne";
        gpa = 3.6;
        dia_chi = "Tp Ho Chi Minh";
    }
    // Constructor 2
    sinhvien(string ma, string name, double diem, string dc){
        msv = ma;
        ten = name;
        gpa = diem;
        dia_chi = dc;
    }

    // Có thể viết các hàm trong struct (nhập, in,...)
    void nhap(){
        cin >> msv;
        cin.ignore();
        getline(cin, ten);
        cin >> gpa;
        cin.ignore();
        getline(cin, dia_chi);
    }

    void in(){
        cout << msv << " " << ten << " " << fixed << setprecision(2) << gpa << " " << dia_chi << endl;
    }
};

// Định nghĩa nạp chồng toán tử
// Cách 1
struct sophuc{
    int a,b; // a+bj
    // Kieu_tra_ve operator (+,-,*,...) (danh sách tham số){ <code> }
    sophuc operator + (const sophuc other){
        sophuc tong;
        tong.a = a + other.a;
        tong.b = b + other.b;
        return tong;
    }
};

// Cách 2 
struct sophuc1{
    int a,b;
    // Mạp chồng struct bằng 2 tham số (bắt buộc phải thêm 1 từ khóa <friend>)
    friend sophuc1 operator + (const sophuc1 x, const sophuc1 y){
        sophuc1 tong;
        tong.a = x.a + y.a;
        tong.b = x.b + y.b;
        return tong;
    }

    // insertion '>>' <istream>
    friend istream& operator >> (istream& in, sophuc1 &x){
        in >> x.a >> x.b;
        return in;
    } 

    // extraction '<<' <ostream>
    friend ostream& operator << (ostream& out, sophuc1 x){
        out << x.a << x.b;
        return out;
    }

    // equal '==' <bool>
    // bool operator == (const sophuc1 other){
    //     return a == other.a && other.b; 
    // }

    friend bool operator == (const sophuc1 x, const sophuc1 y){
        return x.a == y.a && x.b == y.b;
    }

    // smaller 
    friend bool operator < (const sophuc1 x, const sophuc1 y){
        return x.a + x.b < y.a + y.b;
    }
};

int main(){
    // Các khái niệm cơ bản về khai báo
    {
        // Declair struct;
        sinhvien x;
        // ta có thẻ gán 2 biến cho nhau
        sinhvien y = x;
        x.nhap();
        y.in();

        // Nếu ta khai báo bình thường -> gọi constructor mặc định
        sinhvien a;
        a.in();
        // Nếu ta khai báo mà có parameter -> gọi constructor 2
        sinhvien b{"xyz", "Quy Truong ne", 3.7, "TPHCM"};
        b.in();
    }

    // Khái niệm về toán tử trong struct
    {
        // Các operator được dùng dưới đây phải được định nghĩa nạp chồng toán tử mới sử dụng được
        sophuc1 a,b;
        // Chỉ cin hoặc cout được khi đã được định nghĩa 
        cin >> a >> b;
        // Chỉ cộng được khi đã được định nghĩa 
        sophuc1 c = a+b;
        // cout khi chưa được định nghĩa
        cout << c.a << " " << c.b << endl;
        // cout khi đã được định nghĩa
        cout << c << endl;
    }
    return 0;
}