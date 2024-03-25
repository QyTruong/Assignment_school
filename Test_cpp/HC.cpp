#include<iostream>

using namespace std;

struct 
{
	int mynum;
	string mystring;
} truong1, truong2, truong3;


int main(){
    truong1.mynum = 1;
    truong2.mynum = 12;
    truong3.mystring = "truongne";
    cout << truong1.mynum << endl;
    cout << truong2.mynum << endl;
    cout << truong3.mystring << endl;
    return 0;
} 