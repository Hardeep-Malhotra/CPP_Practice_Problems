#include <iostream>
using namespace std;

bool checkYear(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    else if (year % 100 == 0)
    {
        return false;
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int year;
    cout << "Enter any Year :";
    cin >> year;

    checkYear(year) ? cout << year << " is a Leap Year." : cout << year << " is Not a Leap Year.";

    return 0;
}