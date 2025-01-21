// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of coloumns: ";
    cin>>col;
    int a[row][col];
    int transpose[col][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the value at index "<<i<<j<<": ";
            cin>>a[i][j];
           
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           
           
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nThe transpose of matrix is: "<<endl;
      for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
           
            transpose[i][j]=a[j][i];
        
        }
        cout<<endl;
    }
     for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
           
          
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    
 

    return 0;
}