// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sum(int** a, int**b,int row,int col)
{
    int**sum=new int*[row];
    for(int i=0;i<row;i++)
    {
        sum[i]=new int[col];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           sum[i][j]=a[i][j]+b[i][j];
            
        }
        cout<<endl;
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           cout<<sum[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
    
    return 0;
}
int main() 
{
    int row,col;
    cout<<"enter the number of rows: ";
    cin>>row;
    cout<<"enter the number of coloumns: ";
    cin>>col;
    int** a=new int*[row];
    int** b=new int*[row];
    for(int i=0;i<row;i++)
    {
        a[i]=new int[col];
        b[i]=new int[col];
    }
    cout<<endl;
    cout<<"enter the values of matrix1 "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"enter the value at index "<<i<<j<<": ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<"  ";
            
        }
        cout<<endl;
    }
        cout<<"enter the values of matrix2 "<<endl;
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"enter the value at index "<<i<<j<<": ";
            cin>>b[i][j];
        }
        cout<<endl;
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<b[i][j]<<"  ";
            
        }
        cout<<endl;
    }
    sum(a,b,row,col);

    return 0;
}