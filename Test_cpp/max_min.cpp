#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i <= n; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i <= n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }

    int min = max;
    for (int i = 0; i <= n; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    cout << max;
    cout << min;
}