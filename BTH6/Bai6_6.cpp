#include<iostream>

using namespace std;

int reverse_num(int n){
    int tmp = 0;
    while (n > 0){
        tmp = tmp*10 + n%10;
        n /= 10;
    }
    return tmp;
}

int main(){
    int n;
    cin >> n;
    cout << reverse_num(n);
}