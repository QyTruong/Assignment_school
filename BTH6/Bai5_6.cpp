#include<iostream>

using namespace std;

void sqrt_star(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    sqrt_star(n);
}