#include<iostream>

using namespace std;

long vitrimin(long a[], long n){
    long min = a[0],vt=0;
    for (int i = 0; i < n; i++){
        if (a[i] < min){
            min = a[i];
            vt = i;
        }
    }
    return vt;
}

int suckhoe(long h, long w, long s){
    int kq;
    int tlc;
    if (s == 1) tlc = h - 100;
    else tlc = h - 110;
    if (w < tlc-5) kq = -1;
    else if (w > tlc-5) kq = 1;
    else kq = 0;
    if (h < 0 || w < 0 || (s != 1 && s!= 0)) return -2;
    return kq;
}

// Có thể dùng mảng thay thế cho tham chiếu &
void test(long num[], int n){
    for (int i = 0; i < n; i++){
        num[i] = num[i]*2;
    }
}

void test1(const long num[], int n){
    for (int i = 0; i < n; i++){
        // num[i] = num[i]*2;  --> báo lỗi vì num[] đang ở const --> num[] không được thay đổi giá trị
        cout << num[i]; // --> không báo lỗi
    }
}

string QG[] = {"Vietnam", "Thai lan", "Indonesia", "Singapore"};
long HCV[] = {45,34,47,13};
long HCB[] = {23,12,45,33};
long HCD[] = {11,32,19,21};

string ten[] = {"An", "Binh", "Dung", "Cuong", "Huy"};
int tl[] = {60,50,60,63,70};
int cc[] = {165,170,165,167,173};

int main(){
    long n;
    long a[n];
    int vtv = vitrimin(HCV, 4);
    cout << "Quoc gia co it huy chuong vang nhat la: " << QG[vtv] << endl;
    int vtb = vitrimin(HCB, 4);
    cout << "Quoc gia co it huy chuong bac nhat la: " << QG[vtb] << endl;
    int vtd = vitrimin(HCD, 4);
    cout << "Quoc gia co it huy chuong dong nhat la: " << QG[vtd] << endl;

    // long h,w,s;
    // cin >> h >> w >> s;
    
    // if (suckhoe(h,w,s) == -1){

    // }
    
    // long tc = 0;
    // for (int i = 0; i < 4; i++){
    //     if (suckhoe(cc[i], tl[i], 1) == 0){
    //         cout << "Nhung nguoi di: "<< ten[i] << endl;
    //         tc++;
    //     }
    // }
    // cout << endl;
    // cout << "So nguoi di "<< tc;

    

    return 0;
}