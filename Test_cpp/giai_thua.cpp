#include<iostream>

using namespace std;

int gt(int n){
    int gt = 1;
    for (int i = 2; i <= n; i++){
        gt += i;
    }
    return gt;
}

int main(){
    double n, sum = 0;cin>>n;
    for (int i = 1; i < n; i++){
        sum += double(1)/gt(i);
    }
    cout << sum;
}