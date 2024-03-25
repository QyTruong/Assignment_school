#include<iostream>

using namespace std;

int main(){
    long n, arr[100];
    do{
        cout << "Nhap so phan tu: ";
        cin >> n;
        if (n <= 0) {
            cout << "Vui long nhap lai!" << endl;
        }
    } while (n <= 0);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int count_chan = 0, count_le = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0) count_chan++;
        else count_le++;
    }
    cout << "Co " << count_chan << " so chan!" << endl;
    cout << "Co " << count_le << " so le!" << endl;

    long MAX_AM = arr[0];
    for (int i = 0; i < n; i++){
        if ((arr[i] < 0 && MAX_AM >= 0) || (arr[i] < 0 && arr[i] > MAX_AM)){
            MAX_AM = arr[i];
        }
    }
    long MIN_DUONG = arr[0];
    for (int i = 0; i < n; i++){
        if ((arr[i] > 0 && MIN_DUONG <= 0) || (arr[i] > 0 && arr[i] < MIN_DUONG)){
            MIN_DUONG = arr[i];
        }
    }
    cout << "So am lon nhat la: " << MAX_AM << endl;
    cout << "So duong nho nhat la: " << MIN_DUONG << endl;

    int pos;
    cout << "Nhap vi tri ban muon xoa: ";
    cin >> pos;
    for (int i = pos-1; i < n; i++){
        arr[i] = arr[i+1];
    }
    n--;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    arr[0] = 1, arr[1] = 1;
    for (int i = 2; i <= n; i++){
        arr[i] = arr[i-2] + arr[i-1];
    }
    cout << "Day so fibonacci voi " << n+1 << " phan tu: ";
    for (int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }



    return 0;
}


















































// #include<iostream>
// #include<cmath>

// using namespace std;

// // Hàm: Số âm lớn nhất
// long max_neg(long a[], long n){
//     long AmMax = a[0];
//     for (int i = 1; i < n; i++){
//         // Luôn ép a[i] luôn âm và AmMax chia thành 2 trường hợp +|-
//         if ((a[i] < 0 && AmMax >= 0) || (a[i] < 0 && a[i] > AmMax)) 
//             AmMax = a[i];
//     }
//     return AmMax;
// }

// // Hàm: Số dương nhỏ nhất
// long min_pos(long a[], long n){
//     long DuongMin = a[0];
//     for (int  i = 1; i < n; i++){
//         // Luôn ép a[i] luôn dương và AmMax chia thành 2 trường hợp -|+
//         if ((a[i] > 0 && DuongMin <= 0) || (a[i] > 0) && a[i] < DuongMin)
//             DuongMin = a[i];
//     }
//     return DuongMin;
// }

// int main(){
//     long n, arr[100];
//     // Nhập 1 số nguyên dương
//     do {
//         cout << "Nhap so phan tu: ";
//         cin >> n;
//         if (n <= 0){
//             cout << "Vui long nhap lai" << endl;
//         }
//     } while(n <= 0);

//     // Nhập mảng
//     for (int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     // Xuất mảng
//     for (int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     long count_even = 0, count_odd = 0;
//     for (int i = 0; i < n; i++){
//         if (arr[i] % 2 == 0) count_even++;
//         else count_odd++; 
//     }
//     // Đếm các số chẵn có trong mảng
//     cout << "Co " << count_even << " so chan" << endl;
//     // Đếm các số lẻ có trong mảng
//     cout << "Co " << count_odd << " so le" << endl;

//     // In ra số âm lớn nhất
//     long gtam = max_neg(arr, n);
//     if (gtam >= 0)  cout << "Khong co so am trong mang";
//     else cout << "So am lon nhat la: " << gtam << endl;
    
//     // In ra sô dương nhỏ nhất
//     long gtduong = min_pos(arr,n);
//     if (gtduong <= 0) cout << "Khong co so duong trong mang";
//     else cout << "So duong nho nhat la " << gtduong << endl;
    
//     return 0;
// }