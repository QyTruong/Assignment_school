#include<iostream>

using namespace std;

int gt (int m){
    int gt = 1;
    for (int i = 2; i <= m; i++){
        gt *= i;
    }
    return gt;
}

int main(){
    int n;
    cin >> n;
    for (int i=0; i < n; i++){
        for (int m = 0; m <= n-i; m++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            cout << gt(i)/gt(j)/gt(i-j) << " ";
        }
        cout << endl;
    }

}