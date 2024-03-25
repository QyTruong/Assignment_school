// =================================VECTOR===============================
#include<iostream>
#include<vector>

using namespace std;
// Vector
// push_back() : thêm vào sau
// pop_pack() : lấy ra từ đằng sau
// size() : tìm kích thước vector
// clear() : xóa toàn bộ các phần tử trong vector
// empty() : trả về true nếu vector rỗng, ngược lại trả về false
// insert() : insert(Vị trí iterator, value) | O(n) -> chèn
// erase() : erase(Vị trí iterator) | O(n) -> xóa
// assign() : assign(Số phần tử, value) -> gán | Ex: assign(5,100) -> 100 100 100 100 100
// resize(n) : thay đổi kích thước của vector 

/*
    Iterator
    + rend() : trỏ tới trước phần tử đầu tiên
    + begin() : trỏ tới phần tử đầu tiên
    + rbegin() : trỏ tới phần tử cuối cùng
    + end() : trỏ tới đằng sau phần tử cuối cùng
*/ 

int main(){
    // ======VECTOR======
    
    // Nhập phần tử cho vector
    {
        // // Cách 1:
        // int n; cin >> n;
        // vector <int> v;
        // for (int i = 0; i < n; i++){
        //     int tmp; cin >> tmp;
        //     v.push_back(tmp);
        // }

        // // Cách 2:
        // int n; cin >> n;
        // vector <int> v(n);
        // for (int i = 0; i < n; i++){
        //     cin >> v[i];
        // }
    }
    
    // Những thao tác cơ bản
    { 
        // int n;
        // cin >> n;
        // // Khai báo 1 vector 
        // vector <int> v;
        // for (int i = 0; i < n; i++){
        //     int x; cin >> x;
        //     v.push_back(x);
        // }

        // cout << v.size() << endl;

        // for (auto y : v){
        //     cout << y << " ";
        // }
    }

    // ======INTERATOR======
    {
        // Khai báo vector
        vector <int> v;
        v.push_back(2);
        v.push_back(5);
        v.push_back(1);

        // Khai báo 1 Iterator
        vector <int> :: iterator it = v.begin();
       
        // Phải rãi tham chiếu bằng ký tự '*';
        cout << "Phan tu dau tien\n";
        cout << *it << endl;
        cout << "Phan tu ke tiep\n";
        ++it; // trỏ đến phần tử tiếp theo "5";
        cout << *it << endl;

        cout << "\n";
        
        // Duyệt vector bằng iterator
        vector <int> :: iterator a;
        // Có thể thay vector<int> :: iterator = auto 
        // Lưu ý: dùng auto buộc phải khỏi tạo cho nó trước ví dụ 'b = 1';
        auto b = 1;
        cout << "Duyet bang vong lap!\n";
        for (a = v.begin(); a != v.end(); a++){
            cout << *a << " ";
        }
        
    }
    
}