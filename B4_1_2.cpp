#include<iostream>
#define ROW 5
#define COL 6
using namespace std;

int arr[ROW][COL];
int r,c;
int hang, cot;
void xuat(){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


void nhap(){
    do {
        cin >> r >> c;
        if ((r <= 0 || r > ROW) || (c <= 0 || c > COL)){
            cout << "Again!!" << endl;
        }
    } while ((r <= 0 || r > ROW) || (c <= 0 || c > COL));
    
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    do {
        cout << "Chon 1 hang tuy y: ";
        cin >> hang;
        cout << "Chon 1 cot tuy y: ";
        cin >> cot;
        if ((hang < 0 || hang >= r) || (cot < 0 || cot >= c)){
            cout << "Again!!" << endl;
        }
    } while ((hang < 0 || hang >= r) || (cot < 0 || cot >= c));
}

int tong(){
    int sum = 0;
    int i = 0, j = 0;
    while (i <= hang || j <= cot){
        sum += arr[hang][j];
        j++;
        sum += arr[i][cot];
        i++;
    }
    return sum;
}

// Tìm
void tim(int x){
    int dem=0;
    pair<int, int> pr;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (arr[i][j] == x){
                dem++;
            }
        }
    }
    if (dem == 0) {
        cout << x << " khong ton tai trong mang!!" << endl;
    }
    else {
        cout << x << " nam o cac vi tri: ";
        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if (arr[i][j] == x){
                    cout << "[" << i << "," << j << "]" << endl;
                }
            }
        }
        cout << dem << " lan!!";
    }
}

int main(){
    int x; cin >> x;
    nhap();
    tim(x);
    return 0;
}