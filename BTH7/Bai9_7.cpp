#include<iostream>

using namespace std;

// Hàm hoán đổi giá trị
void swap1(long& a, long& b){
    long tmp = a;
    a = b;
    b = tmp;
}

// Hàm xắp sếp 2 số giảm dần
void down_2(long a, long b){
    if (b >= a){
        swap1(a,b);
    }
    cout << a << " " << b;
} 

// Hàm xắp sếp 3 số giảm dần
void down_3(long a, long b, long c){
    if (c > a){
        swap1(a,c);
    }
    if (b > a){
        swap1(b,a);
    }
    if (c > b){
        swap1(b,c);
    }
    cout << a << " " << b << " " << c;
}

// Hàm xắp sếp 3 số tăng dần 
void up_3(long a, long b, long c){
    if (a > c) swap1(a,c);
    if (a > b) swap1(a,b);
    if (b > c) swap1(b,c);
    cout << a << " " << b << " " << c;
}

int main(){
    long a, b, c;
    cin >> a >> b;
    //down(a,b);
    //cout << endl;
    cin >> c;
    down_3(a,b,c);
    cout << endl;
    up_3(a,b,c);
}