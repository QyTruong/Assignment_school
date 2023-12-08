#include<iostream>

using namespace std;

int sum_of_num(int n){
    int tmp = 0;
    while (n > 0){
        tmp += n%10;
        n /= 10;
    }
    return tmp;
}

int main(){
    int n;
    cin >> n;
    cout << sum_of_num(n);
}