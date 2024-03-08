#include<iostream>
#define SIZE 20
using namespace std;

int arr[20][20];
void nhap(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];        
        }
    }
}

void tong(int n){
    int dcc = 0, dcp = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                dcc += arr[i][j];
            }
            if (j == n-i-1){
                dcp += arr[i][j];
            }
        }
    }
    cout << "Duong chep chinh: " << dcc << endl;
    cout << "Duong cheo phu: " << dcp << endl;
}

int main(){
    int n;
    do {
        cout << "Ma tran cap bao nhieu: ";
        cin >> n;
        if  ((n <= 0 || n > SIZE)){
            cout << "Again!!" << endl;
        }
    } while ((n <= 0 || n > SIZE));
    nhap(n);
    tong(n);
    return 0;
}