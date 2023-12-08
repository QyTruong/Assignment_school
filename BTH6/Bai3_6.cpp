#include<iostream>
#include<math.h>

using namespace std;

long long exponential(double x, int y){
    return pow(x,y);
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << exponential(x,y);
}