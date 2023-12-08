#include<iostream>
#include<math.h>

using namespace std;

bool prime_num(int n){
    if (n < 2){
        return false;
    }
    else {
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    int n;
    cin >> n;
    if (prime_num(n)){
        cout << n << " La so nguyen to";
    }
    else {
        cout << n << " Khong phai la so nguyen to";
    }
}