#include<iostream>
#include <math.h>
#include <stdio.h>
// 1ll*int*int=>long long ->int 10^8*10^8->long long 10^16
using namespace std;

bool sochinhphuong(long long n){
    long long tmp = sqrt(n);
    if (1ll*tmp*tmp == n) return true;
    else return false;
} 

int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 1; i <= n; i++){
        if (sochinhphuong(arr[i])) count++;
        cout << count << endl;
    }
    for (int i = 1; i <= n; i++){
        if (sochinhphuong(arr[i])) cout << arr[i] << " ";
    }
}