#include<iostream>

using namespace std;

int main(){
    int d, r;
    cout << "Chieu dai: ";
    cin >> d;
    cout << "Chieu rong ";
    cin >> r;

    for (int i = 1; i <= d; i++){
        for (int j = 1; j <= r; j++){
            cout << "*";
        }
        cout << endl;
    }
}