#include<iostream>
using namespace std;
int prime(int n);
int main ( )
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
prime(n);
return 0;
}
int prime(int n)
{
    int result=0;
    for(int i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
        result=1;
    }
        if(result==0)
        {
            cout<<"It is a prime number";
            break;
        }
        else
        {
            cout<<"It  is a composite number";
            break;
        }
    }
    return n;
}