#include<iostream>

using namespace std;

int main(){
    int h;
    cin >> h;
    int **a = new int *[h];
    for (int i = 0; i < h; i++){
        a[i] = new int [i+1];
    }
    for (int i = 0; i < h; i++){
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int i = 1; i < h; i++){
        for (int j = 1; j < i; j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for (int i = 0; i < h; i++){
        for (int k = h-i; k >= 0; k--){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < h; i++){
        delete []a[i];
    }
    delete []a;
    return 0;
}