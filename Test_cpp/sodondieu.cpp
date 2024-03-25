// Kiểm tra dãy số đơn điệu trong mảng (số tăng dần hoặc số giảm dần)
#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Cách 1: so sánh 2 số liền kề
    bool check_1 = true;
    bool check_2 = true;
    for (int i = 1; i < n; i++){
        if (a[i-1] >= a[i]) check_1 = false;
        if (a[i-1] <= a[i]) check_2 = false;
    }

    if (check_1 || check_2) cout << "YES";
    else cout << "NO";

    cout << endl;
    // Cách 2: lấy hiệu của 2 số liền kề 
    bool kt = true;
    if (n > 2){
        for (int i = 2; i < n; i++){
            if ((a[i] - a[i-1]) * (a[i-1] - a[i-2]) <= 0){
                kt = false;
            }
        }
    }
    if (kt) cout <<"YES";
    else cout <<"NO";
    
    return 0;
}

// bool check_1 = true;
//     bool check_2 = true;
//     for (int i = 1; i < n; i++){
//         if (a[i-1] >= a[i]) check_1 = false;
//         if (a[i-1] <= a[i]) check_2 = false;
//     }

//     if (check_1 || check_2) cout << "YES";
//     else cout << "NO";


// bool kt = true;
//     if (n > 2){
//         for (int i = 2; i < n; i++){
//             if ((a[i] - a[i-1]) * (a[i-1] - a[i-2]) <= 0){
//                 kt = false;
//             }
//         }
//     }
//     if (kt) cout <<"YES";
//     else cout <<"NO";