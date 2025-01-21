#include<iostream>
using namespace std;
int linear(int *p, int size, int *t)
{
    int index;
    for(int i=0;i<size;i++)
    {
        if(*(i+p)==*t)
        {
          *t=*(i+p);
          index=i;
        }
    }
    cout<<"element found "<<*t<<" at index: "<<index;
    return *t;
}
int main( )
{
    int target;
    int *t=&target;
    cout<<"enter the target: ";
    cin>>*t;
    int size=6;
    int arr[size]={6,89,64,54,73,9};
    int *p=arr;
    linear(arr,size,&target);
}
