#include<iostream>
#include<random>
using namespace std;

void k_tao(int **a, int **b, int n){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0,10);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            a[i][j] = dist(gen);
            b[i][j] = dist(gen);
        }
    }
}

void xuat(int **a, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void tong_mt(int **a, int **b, int **c, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void tich_mt(int **a, int **b, int **c, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            c[i][j] = 0;
            for (int k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main(){
    // cấp phát và khởi tạo 
    int n; cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++){
        a[i] = new int[n];
    }
    int **b = new int *[n];
    for (int i = 0; i < n; i++){
        b[i] = new int[n];
    }
    k_tao(*&a, *&b, n);
    int **tong = new int *[n];
    for (int i = 0; i < n; i++){
        tong[i] = new int [n];
    }
    int **tich = new int *[n];
    for (int i = 0; i < n; i++){
        tich[i] = new int [n];
    }
    cout << "Ma tran thu 1: \n";
    xuat(*&a, n);
    cout << "Ma tran thu 2: \n";
    xuat(*&b, n);
    tong_mt(*&a, *&b, *&tong, n);
    tich_mt(*&a, *&b, *&tich, n);
    cout << "Tong 2 ma tran: \n";
    xuat(*&tong, n);
    cout << "Tich 2 ma tran: \n";
    xuat(*&tich, n);

    // Giải phóng bộ nhớ
    for (int i = 0; i < n; i++){
        delete []a[i];
        delete []b[i];
        delete []tong[i];
        delete []tich[i];
    }
    delete []a;
    delete []b;
    delete []tong;
    delete []tich;
    return 0;
}