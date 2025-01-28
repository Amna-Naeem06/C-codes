#include<iostream>
using namespace std;
int selectionsort(int arr[], int size )
{
    int minindex,i,j;
    for( i=0;i<size-1;i++)
    {
    minindex=i;
    
        for( j=i+1;j<size;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
        
        }
        int temp=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;
    }
    return 1;
}
int main( )
{
    int arr[]={8,56,20,53,12,10,2};
    int size= sizeof (arr)/sizeof (arr[0]);
    selectionsort(arr,size);
    for(int i=0;i<size;i++)
    {
    cout<<arr[i]<<" ";
    }
}