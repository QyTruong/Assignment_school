#include<iostream>

using namespace std;

void Max_2(int a, int b){
    if (a > b){
        cout << a << " La so lon nhat!";
    }
    else {
        cout << b << " La so lon nhat!";
    }
}

void Max_3(int a, int b, int c){
    if (a > b && a > c){
        cout << a << " La so lon nhat!";
    }
    else {
        if (b > c){
            cout << b << " La so lon nhat!";
        }
        else {
            cout << c << " La so lon nhat!";
        }
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    Max_2(a,b);

    int c,d,e;
    cin >> c >> d >> e;
    Max_3(c,d,e);
}