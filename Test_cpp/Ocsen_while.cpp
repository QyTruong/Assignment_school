#include<iostream>

using namespace std;

int main1(){
    int docao, leo, tut, songay = 0, leoduoc = 0, tiep;
    
    cout << "Do cao: ";
    cin >> docao;
    cout << "Leo duoc: ";
    cin >> leo;
    cout << "Tut: ";
    cin >> tut;

    bool n = true, m = true;
    
        while (n){
                leoduoc += leo;
                songay++;
                if (leoduoc >= docao){
                    n = false;
                }
                leoduoc -= tut;
            }
            cout << "So ngay leo xong la: " << songay << endl;

    songay = 0;        
    while (m) {
        cout << "Ban co muon nhap lai (Yes/No = 1/0): ";
        cin >> tiep;
        
        if (tiep == 1) {
            cout << "Do cao: ";
            cin >> docao;
            cout << "Leoduoc: ";
            cin >> leo;
            cout << "Tut: ";
            cin >> tut;
            
            
            while (n){
                leoduoc += leo;
                songay++;
                if (leoduoc >= docao){
                    n = false;
                }
                leoduoc -= tut;
            }
            cout << songay << endl;
            
        
        }
        
        else if (tiep == 0)
            m = false;
        else {
            continue;
        }
    }
 
    return 0;
}

