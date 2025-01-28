#include<iostream>
using namespace std;
int reverse(int *a,int size)
{

    cout<<"\nThe array in reverse order is:\n";
    for(int i=size-1;i>=0;i--)
    {
    
    cout<<*(i+a);
    cout<<endl;
    }
    return 0;
}
int main( )
{
    int size;
    
    cout<<"Enter the size of array: ";
    cin>>size;
    int a[size];
    int *ptr=a;

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the values:";
        cin>>*(i+ptr);
    }
    reverse(a,size);
}