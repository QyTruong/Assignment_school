#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// Linear search
bool ls(int a[], int n, int x){
    for (int i = 0; i < n; i++){
        if (a[i] == x)
            return true;
    }
    return false;
}

// Binary search
bool bs(int a[], int n, int x){
    int l = 0, r = n-1;
    while (l <= r){
        int m = (l+r)/2;
        if (a[m] == x){
            return true;
        }
        else if (a[m] < x){
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return false;
}

// Binary_search (recursion)
bool bin_recur(int a[], int l, int r, int x){
    if (r < l)
        return false;
    int m = (r+l)/2;
    if (a[m] == x)
        return true;
    else if (a[m] < x)
        return bin_recur(a,m+1,r,x);
    else 
        return bin_recur(a,l,m-1,x);
}

// Tìm vị trí đầu tiên của 1 số mảng
int first_pos(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n-1;
    while(l <= r){
        int m = (l+r)/2;
        if (a[m] == x){
            res = m;
            r = m-1;
        }
        else if (a[m] < x){
            l = m+1;
        }
        else {
            r = m-1;
        }
    }
    return res;
}

// Tìm vị trí cuối cùng của 1 số trong mảng
int last_pos(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n-1;
    while(l <= r){
        int m = (l+r)/2;
        if (a[m] == x){
            res = m;
            l = m+1;
        }
        else if (a[m] < x){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return res;
}

int main(){
    int n,x; cin >> n >> x;
    // int a[n];
    // for (int i = 0; i < n; i++){
    //     cin >> a[i];
    // }

    // Binary_search() (Algorithm) <Library>
    // Tìm kiếm trong vector
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    // Parameter trong binary_search() phải là iterator
    if (binary_search(v.begin(), v.end(), x))   
        cout << "Found";
    else 
        cout << "Not found";
    
    return 0;
}