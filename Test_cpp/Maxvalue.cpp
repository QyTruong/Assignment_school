#include <iostream>
using namespace std;
int main()
{
    long dec,rem,i=1,sum=0;
    cout<<"Enter the decimal to be converted:";
    cin>>dec;
    do
    {
        rem=dec%2;
        sum=sum + (i*rem);
        dec=dec/2;
        i=i*10;
    }while(dec>0);
    cout<<"The binary of the given number is:"<<sum<<endl;
    
 
    return 0;
}