#include<iostream>
using namespace std;
int evenodd(int n);
int main( )
{
int n;
cout<<"Enter a number: ";
cin>>n;
evenodd(n);
return 0;
}
int evenodd(int n)
{
    if(n%2==0)
    {
        cout<<"It is even number";
    }
    else
    {
        cout<<"It is odd number";
    }
return n;
}