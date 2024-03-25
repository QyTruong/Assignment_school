// Bài 13: số đẹp
#include<iostream>
#include<cmath>

using namespace std;

int snt(int n){
    if (n < 2) return 0;
    else {
        for (int i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                return 0;
            }
        }
        return n>1;
    }
}

int main(){
    long a,b;
    cin >> a >> b;
    long long fibo[92];
    fibo[0] = 0; fibo[1] = 1;
    for (int i = 2; i < 92; i++){
        fibo[i] = fibo[i-2] + fibo[i-1];
    }

    for (int i = a; i <= b; i++){
        if (snt(i)) {
            for (int j = a; j < b; j++){
                if (i == fibo[j]) cout << i << " ";
            }
        }
    }

    return 0;
}