#include<iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n][n];
    int r1 = 0,r2 = n-1,c1 = 0,c2 = n-1,ROW=n-1,COL=n-1,cnt = 1;
    while (r1 <= r2 && c1 <= c2){
        for (int i = c1; i <= c2; i++){
            arr[r1][i] = cnt;
            cnt++;
        }
        r1++;
        for (int i = r1; i <= r2; i++){
            arr[i][c2] = cnt;
            cnt++;
        }
        c2--;
        if (c1 <= c2){
            for (int i = c2; i >= c1; i--){
                arr[r2][i] = cnt;
                cnt++;
            }
            r2--;
        }
        if (r1 <= r2){
            for (int i = r2; i >= r1; i--){
                arr[i][c1] = cnt;
                cnt++;
            }
            c1++;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}