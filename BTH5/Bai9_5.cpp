#include<iostream>

using namespace std;

int main(){
    int n;
    do{ 
        cout << "Ban muon xem bang cuu chuong may?: ";
        cin >> n;
        if (n > 0){
            for (int i = 1; i <= 10; i++){
                cout << n << " x " << i << " = " << n*i << endl;
            }
        }
        else {
            cout << "Vui long nhap lai! \n";
        }
    } while (n <= 0);
}