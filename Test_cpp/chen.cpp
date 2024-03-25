#include<iostream>

using namespace std;

void inchuoi(char kt, int sl, bool xuonghang){
    for (int i = 1; i <= sl; i++){
        cout << kt;
    }
    if (xuonghang) cout << endl;
    return;
}

int main(){
    int h;
    cin >> h;
    for (int i = h; i >= 1; i--){
        inchuoi(' ', i, false);
        inchuoi('*',h-i+1,false);
        inchuoi('*',h-i,true);
    }
    for (int i = 2; i <= h; i++){
        inchuoi(' ', i, false);
        inchuoi('*',h-i+1,false);
        inchuoi('*',h-i,true);
    }
}