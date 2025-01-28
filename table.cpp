#include<iostream>
using namespace std;
int table(int n);
int main( )
{
    int k;
    cout<<"Enter the number whose table is required: ";
    cin>>k;
    table(k);
    return 0;
}
int table (int n)
{
    for(int i =0;i<=10;i++)
    cout<<n<<"*"<<i<<"="<<n*i<<endl;
    return n;
}