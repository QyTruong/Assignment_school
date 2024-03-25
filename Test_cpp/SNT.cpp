#include<iostream>
#include<math.h>

using namespace std;

int SNT(int k){
    if (k < 2){
        return 0;
    }
    else {
        for (int i = 2; i < sqrt(k); i++){
            if(k % i == 0) return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin >> n;

    if (SNT(n)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}