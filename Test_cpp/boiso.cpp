#include<iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (a[i] % m == 0){
            cout << a[i] << " ";
        }
    }
}