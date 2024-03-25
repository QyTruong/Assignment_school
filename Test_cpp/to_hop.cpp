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
    double n, m;
    cin >> n >> m;

    double tohop;
    tohop = gt(n)/(gt(m)*gt(n-m));
    cout << tohop;
}