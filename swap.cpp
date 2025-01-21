#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"\nAfter swapping: ";
    cout<<"\nThe value of a is: "<<*a<<"\nThe value of b is: "<<*b<<endl;
    return 0;
}
int main( )
{
    int a,b;
    int *ptr=&a;
    int *ptr1=&b;
    cout<<"Enter the value of a: ";
    cin>>*ptr;
    cout<<"\nEnter the value of b: ";
    cin>>*ptr1;
    swap(&a,&b);
}

