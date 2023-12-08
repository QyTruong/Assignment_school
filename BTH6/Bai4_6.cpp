#include<iostream>

using namespace std;

long long sum(int n){
    long long sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

long long factorial(int n){
    if (n <= 0){
        return 0;
    } 
    else {
        long long fac = 1;
        for (int i = n; i >= 1; i--){
            fac *= i;
        }
        return fac;
    }
}

int main(){
    int n;
    cin >> n;
    cout << "Tong: " << sum(n) << endl;
    cout << "Giai thua: " << factorial(n);
}