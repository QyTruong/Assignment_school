#include<iostream>

using namespace std;

#define MAXCOL 100


void Mat_Xoan_Oc(int mat[][MAXCOL], int nRow, int nCol){
    int c1 = 0, c2 = nCol-1, h1 = 0, h2 = nRow-1, cnt = 1;
    while (c1 <= c2 && h1 <= h2){
        for (int i = c1; i <= c2; i++){
            mat[h1][i] = cnt;
            cnt++;
        }
        h1++;
        for (int i = h1; i <= h2; i++){
            mat[i][c2] = cnt;
            cnt++;
        }
        c2--;
        if (c1 <= c2){
            for (int i = c2; i >= c1; i--){
                mat[h2][i] = cnt;
                cnt++;
            }
            h2--;
        }
        if (h1 <= h2){
            for (int i = h2; i >= h1; i--){
                mat[i][c1] = cnt;
                cnt++;
            }
            c1++;
        }
    }
}

void findSpecialPoints(int mat[][MAXCOL], int nRow, int nCol, int& xA, int& yA, int& xB, int& yB){
    xA = 0; yA = 0;
    xB = 0; yB = 0;
    for (int i = 0; i <= nRow; i++){
        for (int i = 0; i <= nCol; i++){

        }
    }

}

void xuat(int mat[][MAXCOL], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,cnt=1;
    cin >> n;
    int a[n][MAXCOL];
    Mat_Xoan_Oc(a,n,n);
    xuat(a,n);

    return 0;
}



















// int n;
//     cin >> n;
//     int a[n][n], cnt = 1;
//     int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
//     while (h1 <= h2 && c1 <= c2){
//         // Cạnh trên cùng
//         for (int i = c1; i <= c2; i++){
//             a[h1][i] = cnt;
//             cnt++;
//         }
//         h1++;
//         // Cạnh bên phải
//         for (int i = h1; i <= h2; i++){
//             a[i][c2] = cnt;
//             cnt++;
//         }
//         c2--;
//         if (c1 <= c2){
//             for (int i = c2; i >= c1; i--){
//                 a[h2][i] = cnt;
//                 cnt++;
//             }
//             h2--;
//         }
        
//         if (h1 <= h2){
//             for (int i = h2; i >= h1; i--){
//                 a[i][c1] = cnt;
//                 cnt++;
//             }
//             c1++;
//         }
        
//     }
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }
