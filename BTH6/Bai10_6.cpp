#include<iostream>

using namespace std;

int complete_num(int n){
    int tmp = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            tmp += i;
        }
    }
    return tmp;
}

int main(){
    int n;
    cin >> n;
    if (n == complete_num(n)){
        cout << n << " La so hoan thien";
    }
    else {
        cout << n << " Khong phai la so hoan thien";
    }
}