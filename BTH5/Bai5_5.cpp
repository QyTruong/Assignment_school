#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n,m;
    do {
        system("cls");
        cout << "Nhap 2 so nguyen duong, sothunhat nho hon sothuhai: " << endl;
        cout << "So thu nhat: ";
        cin >> n;
        cout << "So thu hai: ";
        cin >> m;
        if(n > m || n <= 0){
            cout << "Vui long nhap lai!" << endl;
            system("pause");
        }
    } while (n > m || n <= 0);

    int count = 0;
    
    for (int i = n; i <= m; i++){
        bool a = true;
        if (i == 1){
            a = false;
        }
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                a = false;
                break;
            }
        }
        if (a){
            count++;
        }
    }
    cout << "Co " << count << " so nguyen to!";
}

        
    
