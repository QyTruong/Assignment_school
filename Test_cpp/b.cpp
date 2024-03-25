#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n-i; j++){
            cout << " ";
        }
        for (int a = i+1; a > 1; a--){
            cout << "*";
        }
        for (int b = i; b > 1; b--){
            cout << "*";
        }
    cout << endl;
    }
    for (int i = n-1; i > 0; i--){
        for (int j = 1; j <= n-i; j++){
            cout << " ";
        }
        for (int a = n; a > n-i; a--){
            cout << "*";
        }
        for (int b = n-1; b > n-i; b--){
            cout << "*";
        }
        cout << endl;
    }
    
}