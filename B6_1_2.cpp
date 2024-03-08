#include<iostream>
#define SIZE 20
using namespace std;

long arr1[SIZE][SIZE], arr2[SIZE][SIZE], arrTong[SIZE][SIZE], arrTich[SIZE][SIZE];
void nhap(int n){
    int t = 1;
    // t < 3 vì đề bài chỉ yêu cầu xử lý trên 2 ma trận !!
    while (t < 3){
        cout << "Ma tran thu " << t << ": " << endl;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (t == 1)
                    cin >> arr1[i][j];
                else
                    cin >> arr2[i][j];
            }
        }
        t++;
    }
}

void tong_mt(int n){
    long sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arrTong[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}



void tich_mt(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arrTich[i][j] = 0;
           for (int k = 0; k < n; k++){
                arrTich[i][j] += arr1[i][k] * arr2[k][j];
           }
        }
    }
}

void xuat(int n){
    int t = 1;
    while (t < 3){
        cout << "----------" << endl;
        cout << "Ma tran ";
        if (t == 1) cout << "tong la: " << endl;
        else cout << "tich la: " << endl;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (t == 1)
                    cout << arrTong[i][j] << " ";
                else
                    cout << arrTich[i][j] << " ";
            }
            cout << endl;
        }
        t++;
    }
}

int main(){
    int n;
    do {
        cout << "Ban muon ma tran cap bao nhieu: ";
        cin >> n;
        if (n <= 0 || n > SIZE)
            cout << "Again" << endl;
    } while (n <= 0 || n > SIZE);
    nhap(n);
    tong_mt(n);
    tich_mt(n);
    xuat(n);
    return 0;
}
