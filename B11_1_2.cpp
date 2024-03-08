#include<iostream>
using namespace std;

void menu(){
    cout << "MUC LUA CHON:\n";
    cout << "0. Thoat chuong trinh\n" 
        << "1.Thuong gia (hang 1-2)\n"
        << "2.Pho thong (hang 3-7)\n"
        << "3.Tiet kiem (hang 8-tro di)\n";
    cout << "===========================\n";
}

void list_cho_ngoi(){
    cout << "DANH SACH CHO NGOI\n";
    cout << "      1   2   3   4   5   6\n"
        << "1.  | * | * | x | * | x | x |\n"
        << "    -------------------------\n"
        << "2.  | * | x | * | x | * | x |\n"
        << "    -------------------------\n"
        << "3.  | * | * | x | x | * | x |\n"
        << "    -------------------------\n"
        << "4.  | x | x | x | * | x | x |\n"
        << "    -------------------------\n"
        << "5.  | * | x | * | x | * | * |\n"
        << "    -------------------------\n"
        << "6.  | * | x | * | * | * | x |\n"
        << "    -------------------------\n"
        << "7.  | x | * | * | * | x | x |\n"
        << "    -------------------------\n"
        << "8.  | * | x | * | x | x | * |\n"
        << "    -------------------------\n"
        << "9.  | x | * | x | x | * | * |\n"
        << "    -------------------------\n"
        << "10. | * | x | * | x | x | x |\n"
        << "    -------------------------\n"
        << "11. | * | * | x | * | x | * |\n"
        << "    -------------------------\n"
        << "12. | * | * | x | x | * | x |\n"
        << "    -------------------------\n"
        << "13. | * | * | * | * | x | * |\n"
        << "    -------------------------\n";
    cout << "Chu thich: [*: cho con trong, x: cho da duoc dat] !!\n";
    cout << "=============================\n";
}

int main(){
    char cho_ngoi[13][6] = {
        {'*','*','x','*','x','x'},
        {'*','x','*','x','*','x'},
        {'*','*','x','x','*','x'},
        {'x','x','x','*','x','x'},
        {'*','x','*','x','*','*'},
        {'*','x','*','*','*','x'},
        {'x','*','*','*','x','x'},
        {'*','x','*','x','x','*'},
        {'x','*','x','x','*','*'},
        {'*','x','*','x','x','x'},
        {'*','*','x','*','x','*'},
        {'*','*','x','x','*','x'},
        {'*','*','*','*','x','*'},
    };
    int choice,hang,cot;
    do {
        system("cls");
        list_cho_ngoi();
        menu();
        cout << "Ban muon chon loai ve nao: ";
        cin >> choice;
        switch (choice)
        {
        case 0: {
            cout << "Cam on ban vi da su dung dich vu !!\n";
            break;
        }
        case 1: {
            cout << "Lua chon cho ngoi danh cho ve Hang Thuong Gia\n";
            do {  
                cout << "Hay chon vi tri cho ngoi (hang-cot): \n";
                cout << "Hang: ";
                cin >> hang;
                cout << "Cot: ";
                cin >> cot;
                hang--;cot--;                   
                if ((hang < 0 || hang >= 2) || (cot < 0) || cot >= 6){
                    cout << "Vui long nhap lai!\n";
                }
            } while ((hang < 0 || hang >= 2) || (cot < 0) || cot >= 6);
            if (cho_ngoi[hang][cot] == '*'){
                cout << "Cho ngoi cua ban da duoc dat thanh cong!!\n";
                cout << "Cho ngoi cua ban co vi tri la: " << "[" << hang+1 << "-" << cot+1 << "]" << endl; 
            }
            else {
                    cout << "Cho ngoi nay da duoc dat!!\n";
                }
            break;
        }
        case 2: {
            cout << "Lua chon cho ngoi danh cho ve Hang Pho Thong\n";
            do {  
                cout << "Hay chon vi tri cho ngoi (hang-cot): \n";
                cout << "Hang: ";
                cin >> hang;
                cout << "Cot: ";
                cin >> cot;
                hang--;cot--;                   
                if ((hang < 2 || hang >= 7) || (cot < 0) || cot >= 6){
                    cout << "Vui long nhap lai!\n";
                }
            } while ((hang < 2 || hang >= 7) || (cot < 0) || cot >= 6);
            if (cho_ngoi[hang][cot] == '*'){
                cout << "Cho ngoi cua ban da duoc dat thanh cong!!\n";
                cout << "Cho ngoi cua ban co vi tri la: " << "[" << hang+1 << "-" << cot+1 << "]" << endl; 
            }
            else {
                    cout << "Cho ngoi nay da duoc dat!!\n";
                }
            break;
        }
        case 3: {
            cout << "Lua chon cho ngoi danh cho ve Hang Tiet Kiem\n";
            do {  
                cout << "Hay chon vi tri cho ngoi (hang-cot): \n";
                cout << "Hang: ";
                cin >> hang;
                cout << "Cot: ";
                cin >> cot;
                hang--;cot--;                   
                if ((hang < 7 || hang >= 13) || (cot < 0) || cot >= 6){
                    cout << "Vui long nhap lai!\n";
                }
            } while ((hang < 7 || hang >= 13) || (cot < 0) || cot >= 6);
            if (cho_ngoi[hang][cot] == '*'){
                cout << "Cho ngoi cua ban da duoc dat thanh cong!!\n";
                cout << "Cho ngoi cua ban co vi tri la: " << "[" << hang+1 << "-" << cot+1 << "]" << endl; 
            }
            else {
                    cout << "Cho ngoi nay da duoc dat!!\n";
                }
            break;
        }
        default:
            cout << "Du lieu vao khong hop le!";
            break;
        }
        system("pause"); 
    } while (choice != 0);

    return 0;
}