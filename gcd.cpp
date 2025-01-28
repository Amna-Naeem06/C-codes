#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    int temp;
while (b!=0)
{
temp=a;
a=b;
b=temp%b;
}
return a;
}
int main( )
{
int a,b,GCD=0;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter second number: ";
cin>>b;
GCD=gcd(a , b);
cout<<"GCD is "<<GCD<<endl;
return 0;
}