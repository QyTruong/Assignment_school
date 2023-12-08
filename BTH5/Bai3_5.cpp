#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float n, tong1 = 0, tong2 = 0, tong3 = 0;
    cout << "Nhap 1 so nguyen duong bat ky: ";
    cin >> n;
    int temp1;
    for (int i = 1; i <= n; i++){
        temp1 = pow(i,2);
        tong1 += temp1; 
    }
    cout << tong1 << endl;

    float temp2;
    for (float i = 1; i <= n; i++){
        temp2 = 1/i;
        tong2 += temp2;
    }
    cout << tong2 << endl;

    float temp3;
    for (float i = 1; i <= n; i++){
        temp3 = 1/(2*i-1);
        tong3 += temp3;
    }
    cout << tong3;
}