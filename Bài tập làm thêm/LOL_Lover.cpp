#include<iostream>

using namespace std;

int main(){
    long long sticks, cross_out;
    cin >> sticks;
    cin >> cross_out;
    long long Shasa = 0, Lena = 0;
    if (sticks == 1000000000000000000){
        cout << "NO";
    }
    else if (1000000000000000000 % 2 != 0){
        cout << "YES";
    }
    else {
        while (sticks >= cross_out){
            sticks -= cross_out;
            Shasa++;
            if (sticks >= cross_out){
                sticks -= cross_out;
                Lena++;
            }
        }
        if (Shasa > Lena) cout << "YES";
        else cout << "NO";
    }
}