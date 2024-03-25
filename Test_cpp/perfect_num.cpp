#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long n, sum = 0;
    cin >> n;
    long long m = n;
    if (n > 1e10) m = sqrt(n);
    for (int i = 1; i <= n/2; i++){
        if (m % i == 0) sum += i;
    }
    if (n == sum) cout << "YES";
    else cout << "NO";

    return 0;
}