#include<bits/stdc++.h>

using namespace std;

int f[100];
int fibo(int n){
    f[0] = 0;
    f[1] = 1;
    cout << f[0] << " " << f[1] << " ";
    for (int i = 2; i < n; i++){
        f[i] = f[i - 2] + f[i - 1];
        cout << f[i] << " ";
    }
    return n;
}

int main(){
    int n;
    cin >> n;
    fibo(n);
    int tmp = fibo(n);
    cout << tmp;
    
    
    // vector<int> v(3, 100); // {300, 300, 300}
    // v.push_back(3); // {300, 300, 300, 3}
    // v.push_back(5); // {300, 300, 300, 3, 5}
    // v.push_back(1); // {300, 300, 300, 3, 5, 1}
    // v.push_back(9); // {300, 300, 300, 3, 5, 1, 9}
    

    // for (int &x : v){   // &operator: tham chiếu giá trị
    //     x = 1000;
    // }
    // for (int x : v){
    //     cout << x << endl;
    // }

    // vector<int>::iterator it = v.begin();  // Khai bao iterator
    // ++it; // trỏ sang giá trị kế tiếp
    // it += 2; // trỏ sang thêm 2 vị trí
    // cout << *it << endl; // *operator: rải tham chiếu


    // //Cho iterator vào vòng lặp để duyệt các phần tử 
    // for (it = v.begin(); it != v.end(); it++){
    //     cout << *it << ' '<< endl;
    // }


    //Nhập phần tử cho vector
    // // Cách 1
    // int n; cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++){
    //     cin >> v[i];
    // }


    // // Cách 2
    // vector<int> v;
    // int n; cin >> n;
    // for (int i = 0; i < n; i++){
    //     int tmp; cin >> tmp;
    //     v.push_back(tmp);
    // }

    //     for (int x : v){
    //     cout << x << ' ' << endl;
    // }


}

