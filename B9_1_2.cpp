#include<iostream>

using namespace std;

int main(){
    int n; cin >> n;
    long arr[n+1][n+1];
    int j = 1, k = 1;
    while (j <= n) {
        if (j % 2 != 0){
            for (int i = 1; i <= n; i++){
                arr[i][j] = k;
                k++;
            }
        }
        else {
            for (int i = n; i > 0; i--){
                arr[i][j] = k;
                k++;
            }
        }
        j++;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}