#include<iostream>

using namespace std;

int per_sqrt(int n){
    return n*4;
}

int area_sqrt(int n){
    return n*n;
}

void sqrt_star(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == 1 || i == n){
                cout << "*" << " ";
            }
            else {
                if (j == 1 || j == n){
                    cout << "*" << " ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}

int main(){
    int n; 
    cin >> n;
    cout << "Chu vi hinh vuong: " << per_sqrt(n)
        << "\nDien tich hinh vuong: " << area_sqrt(n) << endl;
    cout << "Hinh vuong day!" << endl;
    sqrt_star(n);
}