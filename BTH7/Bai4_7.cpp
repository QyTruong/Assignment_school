#include<iostream>

using namespace std;

bool char_num(char s){
    if (s >= '0' && s <= '9'){
        return true;
    }
    return false;
}

bool char_word(char s){
    if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z')){
        return true;
    }
    return false;
}

int main(){
    string chuoi;
    cout << "Hay nhap 1 chuoi ki tu tuy y ma ban muon: ";
    getline(cin, chuoi);
    int count1 = 0, count2 = 0;
    for (int i = 0; i < chuoi.size(); i++){
        if (char_num(chuoi[i])) count1++;
        if (char_word(chuoi[i])) count2++;
    }
    cout << "Co " << count1 << " ki tu so" << endl;
    cout << "Co " << count2 << " ki tu chu cai" << endl;
}