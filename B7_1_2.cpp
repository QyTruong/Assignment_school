#include<iostream>
#define SIZE 40
using namespace std;

void nhap(long arr[][SIZE], int r, int c){
    do {
        cout << "ROW: "; cin >> r;
        cout << "COL: "; cin >> c;
        if ((r <= 0 || r > SIZE) || (c <= 0 || c > SIZE))
            cout << "Again!!" << endl;
    } while ((r <= 0 || r > SIZE) || (c <= 0 || c > SIZE));
    
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
}

void xuat(long arr[][SIZE], int r, int c){
     for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

double average_arr(long arr[][SIZE], int r, int c){
    double avr;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            avr += arr[i][j];
        }
    }
    return avr / (r*c);
}

int tim(long arr[][SIZE], int r, int c, int x){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (arr[i][j] == x)
                return 1;
        }
    }
    return 0;
}
    
void reverse_val(long& x, long& y){
        x = x^y;
        y = x^y;
        x = x^y;
}

long tich_col(long arr[][SIZE], int r, int x){
    long tich = 1;
    for (int i = 0; i < r; i++){
        tich *= arr[i][x];
    }
    return tich;
}

int main(){
    long arr[SIZE][SIZE];
    int r,c;
    long x,y;
    return 0;
}