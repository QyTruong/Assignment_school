#include<iostream>
#include<cmath>

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

bool snt(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}


void findSpecialPoints(int mat[][MAXCOL], int nRow, int nCol, int& xA, int& yA, int& xB, int& yB){
    xA = -1; yA = -1;
    xB = -1; yB = -1;
    for (int i = 0; i < nRow; i++){
        for (int j = 0; j < nCol; j++){
            if (snt(mat[i][j])){
                if (xA == -1 || mat[i][j] > mat[xA][yA]){
                    xA = i;
                    yA = j;
                }
            }
        }
    }
    for (int i = 0; i < nRow; i++){
        for (int j = 0; j < nCol; j++){
            if (snt(mat[i][j]) && mat[i][j] < mat[xA][yA]){
                if (xB == -1 || mat[i][j] > mat[xB][yB]){
                    xB = i;
                    yB = j;
                }
            }
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
    // int b[n][MAXCOL] = {
    //     {7,6,8,10},
    //     {12,14,88,22},
    //     {24,26,28,30},
    //     {32,34,36,38}
    // };
    int xA, yA, xB, yB;
    Mat_Xoan_Oc(a,n,n);
    findSpecialPoints(a,n,n,xA,yA,xB,yB);
        cout << "Toa do diem A " << "["<< xA << "; " << yA << "]"<< endl;
        cout << "Toa do diem B " << "["<< xB << "; " << yB << "]"<< endl;
    xuat(a,n);

    return 0;
}
