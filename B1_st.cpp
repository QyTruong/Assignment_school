/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

struct phongBan{
    string maphongban;
    string tenphongban;
};

int main()
{
    phongBan a;
    cin >> a.maphongban;
    cin >> a.tenphongban;
    
    cout << "Ma phong ban: " << a.maphongban << endl;
    cout << "Ten phong ban: "<< a.tenphongban;
    
    return 0;
    
}