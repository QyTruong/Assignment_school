#include<iostream>

using namespace std;

#define ll long long

ll tinh_songay(int ngay, int thang, int nam){
    int sothang30, sothang31, songay;
    if (thang <= 8){
        sothang30 = (thang-1)/2;
        sothang31 = thang/2;
    }
    else {
        sothang30 = (thang-2)/2;
        sothang31 = (thang+1)/2;
    }
    songay = ngay + sothang30*30 + sothang31*31;
    if (thang >= 3) {
        songay-=2;
        if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0){
            songay += 1;
        }
    }
    return songay;
}

int main(){
    int ngay, thang, nam;
    cin >> ngay >> thang >> nam;
    cout << tinh_songay(ngay, thang, nam);
}

