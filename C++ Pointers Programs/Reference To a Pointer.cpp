#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    // Creating reference
    int &ref = x;

    cout << "Value of x: " << x << endl;
    cout << "Value using ref: " << ref << endl;

    // Changing value using reference
    ref = 25;

    cout << "After modifying ref:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of ref: " << ref << endl;

    return 0;
}
