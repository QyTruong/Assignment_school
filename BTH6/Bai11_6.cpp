#include<iostream>

using namespace std;

int palindrome(long long n){
    long long tmp = 0;
    while (n > 0){
        tmp = tmp*10 + n%10;
        n /= 10;
    }

    while (tmp > 0){
        n = n*10 + tmp%10;
        tmp /= 10;
    }
    return n;
}

int main(){
    int n;
    cin >> n;
        long long tmp = 0;
    while (n > 0){
        tmp = tmp*10 + n%10;
        n /= 10;
    }

    int tmp1 = tmp;
    cout << tmp1 << endl;

    while (tmp > 0){
        tmp1 = tmp1*10 + tmp%10;
        tmp /= 10;
    }
    cout << tmp1;
}