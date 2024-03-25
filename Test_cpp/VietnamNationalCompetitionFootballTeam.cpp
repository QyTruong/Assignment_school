#include <iostream>
#include <string>
using namespace std;
int main(){
	string hoten[]={"Bui Hoang Viet Anh",
		"Bui Tan Truong",
		"Bui Tien Dung",
		"Do Duy Manh",
		"Doan Van Hau",
		"Ha Duc Chinh",
		"Ho Tan Tai",
		"Ho Tuan Tai",
		"Le Tien Anh",
		"Le Van Xuan",
		"Luong Xuan Truong",
		"Ly Cong Hoang Anh",
		"Nguyen Hoang Duc",
		"Nguyen Phong Hong Duy",
		"Nguyen Quang Hai",
		"Nguyen Thanh Binh",
		"Nguyen Thanh Chung",
		"Nguyen Tien Linh",
		"Nguyen Trong Hoang",
		"Nguyen Tuan Anh",
		"Nguyen Van Hoang",
		"Nguyen Van Toan",
		"Nguyen Van Toan",
		"Pham Duc Huy",
		"Pham Tuan Hai",
		"Phan Van Duc",
		"Que Ngoc Hai",
		"Tran Dinh Trong",
		"Tran Minh Vuong",
		"Truong Van Thiet",
		"Vu Van Thanh"};

	string vitri[]={
		"Hau ve",
		"Thu mon",
		"Hau ve",
		"Hau ve",
		"Hau ve",
		"Tien dao",
		"Hau ve",
		"Tien dao",
		"Tien ve",
		"Hau ve",
		"Tien ve",
		"Tien ve",
		"Tien ve",
		"Hau ve",
		"Tien ve",
		"Hau ve",
		"Hau ve",
		"Tien dao",
		"Hau ve",
		"Tien ve",
		"Thu mon",
		"Tien dao",
		"Thu mon",
		"Tien ve",
		"Tien dao",
		"Tien ve",
		"Hau ve",
		"Hau ve",
		"Tien ve",
		"Hau ve",
		"Hau ve"
	};

	int soao[]={
		34,24,4,2,5,18,35,10,11,27,6,33,14,7,19,
		31,16,22,8,11,25,9,23,15,10,20,3,
		21,26,5,17
	};

	string clb[]={
		"CLB Ha Noi",
		"CLB Ha Noi","CLB Viettel","CLB Ha Noi","CLB Ha Noi",
		"CLB SHB Da Nang","CLB Binh Dinh","CLB Thanh pho Ho Chi Minh",
		"CLB Topenland Binh Dinh","CLB Ha Noi","CLB Hoang Anh Gia Lai",
		"CLB Hong Linh Ha Tinh","CLB Viettel","CLB Hoang Anh Gia Lai",
		"CLB Ha Noi","CLB Viettel","CLB Ha Noi","CLB Becamex Binh Duong",
		"CLB Viettel","CLB Hoang Anh Gia Lai","CLB Song Lam Nghe An",
		"CLB Hoang Anh Gia Lai","CLB Hai Phong","CLB Ha Noi",
		"CLB Hong Linh Ha Tinh","CLB Song Lam Nghe An","CLB Viettel",
		"CLB Ha Noi","CLB Hoang Anh Gia Lai","CLB Viettel",
		"CLB Hoang Anh Gia Lai"

	};
	
	int x;
	cin >> x; cin.ignore();
	switch(x){
	case 1:{
		string name;
		getline(cin, name);
		for (int i = 0; i <= hoten[i].size(); i++){
			if (hoten[i] == name){
				cout << vitri[i] << " | " << soao[i] << " | " << clb[i]; 
			}
		}
		
		break;
	}
	case 2:{

	string pos;
	int s = 0;
	getline(cin, pos);
	for (int i = 0; i <= 31; i++){
		if (vitri[i] == pos){
			cout << hoten[i] << " | ";
			s++;
		}
	}
	cout << endl;
	cout << "So luong: " << s;
	break;
	}
	case 3:{
		string club;
		int s = 0;
		getline(cin, club);
		for (int i = 0; i <= 31; i++){
			if (clb[i] == club){
				cout << hoten[i] << " | ";
				s++;
			}
		}
		cout << endl;
		cout << "So luong: " << s;
		break;
	}
	
	}
	return 0;
}