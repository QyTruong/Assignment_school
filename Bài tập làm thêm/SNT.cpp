#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long n; int count_2=0;
    do {
        cin >> n;
    } while (n <= 0);

    long long m = n, x = n, count_1=0;
    while (m)
    {
        m /= 10;
        count_1++;
    }
    long a[count_1];
    long tmp = 0, z = 0;
    while (x){
        tmp = x%10;
        x /= 10;
        a[z] = tmp;
        z++;
    }
    
    long long fibo[92];
    fibo[0] = 0; fibo[1] = 1;
    for (int i = 2; i < 92; i++){
        fibo[i] = fibo[i-2] + fibo[i-1];
    }
    for (int i = 0; i < count_1; i++){
        for (int j = 0; j < 92; j++){
            if (a[i] == fibo[j]){
                if (a[i] == a[i+1]) {
                    a[i] = a[i+1];
                    cout << a[i] << " ";
                }
            }
        }
    }

   
    
    return 0;
}