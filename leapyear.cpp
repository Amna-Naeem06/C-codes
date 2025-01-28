#include <iostream>
using namespace std;

void leapyear(int year) 
{
    if (year % 4 == 0)
    {
        cout << "It is a leap year." << endl;
    }
    else
    {
        cout << "It is not a leap year." << endl;
    }
}

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;
    leapyear(year); 
    return 0;
}
