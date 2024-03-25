#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, count = 0;
    do{
        cin >> n;
    } while (n <= 0);

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        bool snt = true;
        if (arr[i] < 2) {
            snt = false;
        }
        else {
            for (int j = 2; j <= sqrt(arr[i]); j++){
                if (arr[i] % j == 0) {
                    snt = false;
                    break;
                }
            }
        }
        if (snt) cout << arr[i] << " ";
    }
    
}