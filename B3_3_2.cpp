#include<iostream>

using namespace std;

int main(){
    int *a, *b;
    a = new int;
    b = new int;
    int ucln = 0;
    cout << "Hay gia tri cua a: "; cin >> *a;
    cout << "Hay gia tri cua b: "; cin >> *b;
    while (*b != 0){
        int tmp = *a % *b;
        *a = *b;
        *b = tmp;
    }
    ucln = *a;
    cout << "Uoc chung lon nhat cua la: " << ucln;
    return 0;
}