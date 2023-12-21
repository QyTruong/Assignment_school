#include<iostream>

using namespace std; 

bool upper(char a){
    if (a >= 'A' && a <= 'Z'){
        return true;
    }
    return false;
}

bool lower(char a){
    if (a >= 'a' && a <= 'z'){
        return true;
    }
    return false;
}

int main(){
    string a;
    int count1 = 0, count2 = 0;
    cout << "Nhap nhap ten cua ban: ";
    getline(cin, a);
    for (int i = 0; i < a.size(); i++){
        if (upper(a[i])) count1++;
        if (lower(a[i])) count2++;
    }
    cout << "Co " << count1 << " ki tu in hoa" << endl;
    cout << "Co " << count2 << " ki tu in thuong" << endl;
}