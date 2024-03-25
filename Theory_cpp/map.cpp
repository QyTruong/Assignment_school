//--------------------------------------------- MAP -------------------------------------------------//
#include<iostream>
#include<map>
#include<unordered_map>


using namespace std;

// map (key, value)
// Multimap (keys, value)
// insert
// erase
int main(){
    // Map (1 key -> 1 value)  != Unordered_map <có thứ tự != không có thứ tự>
    {
        map<string, int> gia_tien;
        gia_tien.insert({"Man hinh", 3000000});
        gia_tien.insert({"CPU", 4000000});
        gia_tien.insert({"GPU", 5000000});
        gia_tien.insert({"Memory", 500000});
        gia_tien.erase("Memory");
        cout << "Tong san pham la: " << gia_tien.size() << endl;

        // Code dùng để duyệt các phần tử trong map
        {
            // Dùng pair <key, value> 
            for (pair <string, int> x : gia_tien){
                cout << x.first << ": " << x.second << endl;
            }

            // Dùng Auto
            for (auto y : gia_tien){
                cout << y.first << ": " << y.second << endl;
            }

            // Dùng iterator
            for (map<string, int> :: iterator z = gia_tien.begin(); z != gia_tien.end(); z++){
                cout << (*z).first << ": " << (*z).second << endl;
            }
        }
        cout << "________________________________" << endl;

        // Code dùng để tìm kiếm trong map
        {
            // Count (tìm key trong map)
            if (gia_tien.count("Man hinh") != 0){
                cout << "Found!" << endl;
            }
            else {
                cout << "Not found!" << endl;
            }

            // Find (tìm key trong khoảng map)
            if (gia_tien.find("CPU") != gia_tien.end()){
                cout << "Found!" << endl;
            }
            else {
                cout << "Not found!" << endl;
            }   
        }
        cout << "________________________________" << endl;

        // Đếm số lần các phần tử trong mảng xuất hiện
        {
            /* Input : 13
                2 2 3 4 5 5 5 6 7 8 9 2 1
            */ 
            map<int , int> mp;
            int n;
            cin >> n;
            for (int i = 0;  i < n; i++){
                int value; cin >> value;
                mp[value]++; // (key_type = value, value_type += 1)
            }
            
            for (auto out : mp){
                cout << out.first << " co " << out.second << " lan xuat hien!" << endl;
            }

            // In ra các số chỉ xuất hiện 1 lần trong mảng
            int count = 0;
            for (auto out : mp){
                if (out.second == 1){
                    count++;
                }
            }
            cout << count << endl;
            for (auto out : mp){
                if (out.second == 1){
                    cout << out.first << " ";
                    count++;
                }
            }
            cout << "________________________________" << endl;

            // In ra phần tử xuất hiện nhiều nhất trong mảng
            int m;
            cin >> m;
            map <string, int> max_mp;
            for (int i = 0; i < m; i++){
                string name; cin >> name;
                max_mp[name]++;
            }

            int max_freq = 0; string name_1;
            for (auto out_1: max_mp){
                // Nếu cùng tần suất xuất hiện <lấy phần tử nhỏ nhất ">", lấy phần tử lớn nhất ">="> Dựa trên bảng chữ cái nếu là string
                if (out_1.second > max_freq){ 
                    max_freq = out_1.second;
                    name_1 = out_1.first;
                }
            }
            cout << name_1 << ": " << max_freq << endl;
            cout << "________________________________" << endl;
        }
        cout << "________________________________" << endl;
    }
    
    // Multimap (1 key -> many values)
    {
        multimap <int , int> mmp;
        mmp.insert({100, 200});
        mmp.insert({200, 300});
        mmp.insert({100, 400});

        for (auto x : mmp){
            cout << x.first << ": " << x.second << endl;
        }
    }
    return 0;
}