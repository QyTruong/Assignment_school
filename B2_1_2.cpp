#include<iostream>
#define SIZE 20
using namespace std;

int arr2[SIZE][SIZE];
void nhap(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            cin >> arr2[i][j];
        }
    }
}

void xuat(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    nhap();
    xuat();
    return 0;
}