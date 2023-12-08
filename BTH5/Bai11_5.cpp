#include<iostream>

using namespace std;

int main(){
    int canh;
    cout << "Canh hinh vuong la: ";
    cin >> canh;

    cout << "\nHinh 1\n";
    for (int i = 1; i <= canh; i++){
        for (int j = 1; j <= canh; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "\nHinh 2\n";
    for (int a = 1; a <= canh; a++){
        for (int b = 1; b <= canh; b++){
            if (a == 1 || a == canh){
                cout << "* ";
            }
            else {
                if (b == 1 || b == canh){
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}