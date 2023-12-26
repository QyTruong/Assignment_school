#include<iostream>
#include<iomanip>
#include<map>
#include<unordered_map>

using namespace std;

int main(){
    // Phần khai báo biến
    string Ten_mon[] = {"Ga ran", "Combo Ga", "Hamburger", "Combo Hamburger", "Coke"};
    long long gia_tien[] = {305, 360 , 210, 260, 20};
    float phu_thu[] = {0.01, 0.15, 0.05, 0.1, 0};
    map <int, int> so_mon;
    int so_luong = 0;
    int choice;

    // In Menu
    cout << "_____________MENU_____________" << endl;
        cout << "0. Nhan 0 de thoat chuong trinh" << endl;
        cout << "1. Ga ran (5 mieng canh ga) | 305.000" << endl;
        cout << "2. Combo ga (Ga ran + Coke + Khoai tay) | 360.000" << endl;
        cout << "3. Hamburger (1 Hamburger thit bo Wagyu) | 210.000" << endl;
        cout << "4. Combo Hamburger (Hamburger + khoai tay + Coke) | 260.000" << endl;
        cout << "5. Coke (1 Grand Coke <- Free ffill) | 20.000" << endl;

    // Vòng lặp chương trình thực hiện để trao đổi với người dùng
    do {
        // Giới hạn món trong menu
        do {
            cout << "Hay chon mon an cua ban (1-5) (Hoac nhap 0 de nhan hoa don): ";
            cin >> choice;
            if (choice > 5 || choice < 0){
                cout << "Lua chon vua roi khong hop le!" << endl;
            }
        } while (choice > 5 || choice < 0);

        // Thoát chương trình
        if (choice == 0) {
            break;
        }

        // Số lượng của từng món 
        cout << "Bao nhieu phan: ";
        cin >> so_luong;

        // Lưu trữ những lựa chọn và số lượng món ăn của khách hàng 
        so_mon[choice-1] = so_luong;

    } while (choice != 0);

    // Nếu có chọn món thì sẽ in ra hóa đơn
    if (so_luong != 0){
        cout << endl;
        long long sum = 0, sum_phu_thu = 0;
        cout << "-------------------------------------\n" ;
        cout << "TONG HOA DON CUA BAN BAO GOM: " << endl;
        for (auto x : so_mon){
                cout << Ten_mon[x.first] << " Co " << x.second << " phan";
                cout << " -> " << setprecision(0) << fixed << gia_tien[x.first]*x.second + gia_tien[x.first]*x.second*phu_thu[x.first] << "000VND";
                cout << endl;
                sum += gia_tien[x.first]*x.second + gia_tien[x.first]*x.second*phu_thu[x.first];
                sum_phu_thu += gia_tien[x.first]*x.second*phu_thu[x.first];
                //cout << i << " ";
        }
        // Tổng phụ thu
        cout << "Tong phu thu: " << sum_phu_thu << "000VND" << endl;
        // Tổng tiền 
        cout << "Tong cong: " << sum << "000VND" << endl;
        cout << "-------------------------------------\n";
        cout << "Cam on ban da su dung dich vu nay!" << endl;
    }
    // Nếu không chọn món sẽ không in ra hóa đơn
    else cout << "Cam on ban da su dung dich vu nay!" << endl;

    system("pause");
    return 0;
}


