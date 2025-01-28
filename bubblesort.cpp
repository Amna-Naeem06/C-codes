// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int bubblesort(int arr[],int size)
{
    int temp;
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
              
            }
        }
    }
     return 1;
}
int main() 
{
      int arr[]={4,7,9,2,56};
    int size=sizeof(arr)/sizeof(arr[0]);
  bubblesort( arr, size);
    for(int i=0;i<size;i++)
cout<<arr[i]<<" ";

    return 0;
}