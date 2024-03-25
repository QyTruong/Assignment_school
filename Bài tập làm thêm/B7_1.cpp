#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    long c;
    double f;
    do {
        cout << "Nhiet do C la: ";
        cin >> c;
        if (c <= 0){
            cout << "Vui long nhap lai!" << endl;
        }
    } while (c <= 0);

    f = (double(c*9)/5)+32;
    cout << setprecision(2) << fixed << "Nhiet do F la: " << f << endl;
    return 0;
}