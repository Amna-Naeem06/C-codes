
#include <iostream>
using namespace std;
int main() {
    int rev,rem;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
    rem=n%10;
    cout<<rem;
    n=n/10;
    }

    return 0;
}