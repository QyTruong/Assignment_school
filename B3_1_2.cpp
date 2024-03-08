#include<iostream>
#define ROW 10
#define COL 15
using namespace std;

int arr[ROW][COL];
int r, c;
void nhap(){
    do {
        cin >> r >> c;
        if ((r <= 0 || r > ROW) || (c <= 0 || c > COL)){
            cout << "Again!!" << endl;
        }
    } while ((r <= 0 || r > ROW) || (c <= 0 || c > COL));

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
}

int tong(){
    int sum = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            sum += arr[i][j];
        }
    }
    return sum;
}

int GTNN(){
    int min = arr[0][0];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (arr[i][j] <= min){
                min = arr[i][j];
            }
        }
    }
    return min;
}

int GTLN(){
    int max = arr[0][0];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (arr[i][j] >= max){
                max = arr[i][j];
            }
        }
    }
    return max;
}

void tim(){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (arr[i][j] == GTNN()){
                cout << "Vi tri cua gia tri nho nhat la: " << "[" << i << "," << j << "]" << endl;
            }
            if (arr[i][j] == GTLN()){
                cout << "Vi tri cua gia tri lon nhat la: " << "[" << i << "," << j << "]" << endl;
            }
        }
    }
}

int main(){
    nhap();
    // cout << tong();
    cout << GTNN();
    cout << GTLN();
    cout << endl;
    tim();
    return 0;
}