#include<iostream>

using namespace std;

int main(){
    int n,m, tmp;
    cin >> n >> m;
    if (n > m){
        tmp = n;
        n = m;
        m = tmp;
    }
    
    int sochan=0, sole=0, uoc=0;
    for (int i = n; i <= m; i++){
        if (i%2==0){
            sochan++;
        }
        else{
            sole++;
        }
        if (i%10==0){
            uoc++;
        }
    }
    cout << "Co " << sochan << " la so chan" << endl;
    cout << "Co " << sole << " la so le" << endl;
    cout << "Co " << uoc << " so la uoc cua 10" << endl;
}