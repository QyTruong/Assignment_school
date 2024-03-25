#include<iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a[100];
    int tmp = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        for (int j = i+1; j <= n; j++){
            if (a[j] > a[i])
                swap(a[i], a[j]);
        }
    }
    for (int i = 1; i <= n; i++){
        if (i % 3 == 0)
            continue;
        else 
            tmp += a[i];
    }
    cout << tmp;
    return 0;
}