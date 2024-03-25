#include<iostream>
#include<algorithm>

using namespace std;

// Sắp xếp thứ tự tăng dần theo gpa
// Input:
// 3
// 1
// Nguyen Van A
// 3.6
// 2
// Nguyen Van B
// 3.9
// 3
// Nguyen Van C
// 3.5

// Output:
// 3 Nguyen Van C 3.5
// 1 Nguyen Van A 3.6
// 2 Nguyen Van B 3.9

struct sv{
    int msv;
    string ten;
    double gpa;
    bool operator < (const sv other){
        return gpa < other.gpa;
    }
};

int main(){
    int n;
    cin >> n;
    sv danhsach[n];
    for (int i = 0; i < n; i++){
        cin >> danhsach[i].msv; cin.ignore();
        getline(cin, danhsach[i].ten);
        cin >> danhsach[i].gpa;
    }
    sort(danhsach, danhsach + n);
    for (sv x : danhsach){
        cout << x.msv << " " << x.ten << " " << x.gpa << endl;
    }
    return 0;
}