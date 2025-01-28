#include<iostream>
int binarysearch(int *a,int target)
{
     int *p=a;
int mid,left=0;
int right=5;
while(left<=right)
{
mid=left+(right-left)/2;
if(*(p+mid)==target)
{
    return mid;
}
else if(*(p+mid)<target)
{
    left=mid+1;
 
}
else{
    right=mid-1;

}

}
return -1;
}

using namespace std;

int main( )
{
    int target;
   cout<<"enter the target: "; 
    cin>>target;
    
    int a[]={3,20,55,74,80,93};
   
   
    int index=binarysearch(a,target);
if(index!=-1)
{
    cout<<"element found at index "<<index;
}
else
{
    cout<<"element not found";
}

}