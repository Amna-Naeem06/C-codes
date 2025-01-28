#include<iostream>
using namespace std;
int main( )
{

    int a[5];
    int i,count=0;
    int n;
    int size = sizeof(a) / sizeof(a[0]);
    for(i=0;i<5;i++)
    {
cout<<"Enter the number: ";
    cin>>a[i];
    }
    cout<<"\n enter the number you want to count: ";
    cin>>n;
    for(int i=0;i<size;i++)
    if(a[i]==n)
    {
    count++;
    }
    cout<<n<<" appears "<<count<<" times in the array."<<endl;;
}