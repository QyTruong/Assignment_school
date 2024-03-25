#include<iostream>

using namespace std;
int n,m;

void player(){
    cout << "Ban muon rut bao nhieu: ";
    int x; cin >> x;
    if (x > m || x > n){
        cout << "So luong khong du. Vui long nhap lai!\n";
        player();
    }
    n -= x;
}

void show(){
    cout << "So que con lai la: " << n << endl;
}

void bot(){
    if (n % (m+1) == 0){
        cout << "Bot rut 1 que\n";
        n--;
    }
    else {
        int x = n % (m+1);
        cout << "Bot rut " << x << " que\n";
        n -= x;
    }
}

int main(){
    do {
        cout << "Tong so que: ";
        cin >> n;
        cout << "So que toi da co the rut: ";
        cin >> m;
        if (m <= 0 || m > n){
            cout << "Vui long nhap lai!\n";
        }
    } while (m <= 0 || m > n);
    while (true){
        player();
        if (n <= 0){
            cout << "Ban thang!\n";
            break;
        }
        show();
        bot();
        if (n <= 0){
            cout << "Bot thang!\n";
            break;
        }
        show();
    }
    return 0;
}