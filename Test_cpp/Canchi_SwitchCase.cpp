#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

/*  1. Giáp         1. Tí
    2. Ất           2. Sửu
    3. Bính         3. Dần
    4. Đinh         4. Mão
    5. Mậu          5. Thìn
    6. Kỷ           6. Tỵ
    7. Canh         7. Ngọ
    8. Tân          8. Mùi
    9. Nhâm         9. Thân
    10. Quí         10. Dậu
                    11. Tuất
                    12. Hợi
*/

int main1(){

    int nam, can, chi;
    cin >> nam;

    can = nam % 10;
    switch (can)
    {
    case 0:
        cout << "Canh";
        break;
    case 1:
        cout << "Tan";
        break;
    case 2:
        cout << "Nham";
        break;
    case 3:
        cout << "Qui";
        break;
    case 4:
        cout <<"Giap";
        break;
    case 5:
        cout << "At";
        break;
    case 6:
        cout << "Binh";
        break;
    case 7:
        cout << "Dinh";
        break;
    case 8:
        cout << "Mau";
        break;
    case 9:
        cout << "Ky";
        break;
    default:
        break;
    }

    cout << " - ";

    chi = nam % 12;
        switch (chi)
    {
    case 0:
        cout << "Than";
        break;
    case 1:
        cout << "Dau";
        break;
    case 2:
        cout << "Tuat";
        break;
    case 3:
        cout << "Hoi";
        break;
    case 4:
        cout <<"Ti";
        break;
    case 5:
        cout << "Suu";
        break;
    case 6:
        cout << "Dan";
        break;
    case 7:
        cout << "Mao";
        break;
    case 8:
        cout << "Thin";
        break;
    case 9:
        cout << "Ty";
        break;
    case 10:
        cout << "Ngo";
        break;
    case 11:
        cout << "Mui";
        break;
    default:
        break;
    }

    return 0;
}

