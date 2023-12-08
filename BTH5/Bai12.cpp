#include<iostream>

using namespace std;

int main(){
    int h;
    cout << "Chieu cao la: ";
    cin >> h;
    cout << "\nHinh1\n";
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= i; j++){
            if (i < 2 || i == h){
                cout << "*";
            }
            else {
                if (j == i || j == i){
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    cout << "\nHinh2\n";
    for (int a = 1; a <= h; a++){
        for (int b = h-a; b >= 1; b--){
            cout << " ";
        }
        for (int c = 1; c <= a; c++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nHinh3\n";
    for (int d = 1; d <= h; d++){
        for (int e = h+1-d; e >= 1; e--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nHinh4\n";
    for (int f = 1; f <= h; f++){
        for (int g = 1; g < f; g++){
            cout << " ";
        }
        for (int k = 0; k <= h-f; k++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nHinh5\n";
    for (int l = 1; l <= h; l++){
        for (int m = 1; m <= h-l; m++){
            cout << " ";
        }
        for (int n = l; n >= 1; n--){
            cout << "* ";
        }
        cout << endl;
    }
}