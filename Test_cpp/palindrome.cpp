#include<iostream>

using namespace std;
long palindrome(long n){
    int res = n;
    int tmp = 0;
    while (n){
        tmp = tmp*10 + n%10;
        n /= 10;
    }
    return tmp == res;
}

int main(){
    long k = 10000;
    int dem = 0;
    for (int i = k; dem <= 100; i++){
        if (palindrome(i)) {
            cout << i << " ";
            if (dem != 100){
                cout << ", ";
            }
            else {
                cout << ".";
            }
            dem++;
        }
    }
}