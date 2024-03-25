// In ra k phần tử lớn nhất
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    
    for (int i = m-1; i >= 0; i--){
        cout << a[i] << " ";
    }
    
}