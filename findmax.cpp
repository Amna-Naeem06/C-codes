#include<iostream>
using namespace std;
int findmax(int *p,int size)
{

    int max=*p;
for(int i=0;i<size;i++)
{
if(*(i+p)>max)
{
    max=*(p+i);
}
}
return max;
}
int main( )
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int a[size];
    int *p = a;
    
    for(int i=0;i<size;i++)
    {
    cout<<"Enter the values: ";
        cin>>*(i+p);
    }
    cout<<"The maximum value is: ";
    cout<<findmax(a, size);
}