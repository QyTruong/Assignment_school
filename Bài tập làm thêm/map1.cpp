// Các số xuất hiện trong mảng
#include<iostream>
#include<map>

using namespace std;

int main(){
    int solan; cin >> solan;
    while(solan--){
        map<long long, bool> mp;
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            long long x; cin >> x;
            mp[x] = true;
        }
        for (int i = 0; i < n; i++){
            if (mp[i]) cout << i << " ";
            else cout << "-1" << " ";
        }        
    }
    return 0;
}