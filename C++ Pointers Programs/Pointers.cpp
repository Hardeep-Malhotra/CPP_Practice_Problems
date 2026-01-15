#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;

    cout << "Value of x : " << x << endl;
    cout << "Address of x : " << &x << endl;
    cout << "Value stored in pointer ptr : " << ptr << endl;
    cout << "Value pointer to by ptr : " << *ptr << endl;

    return 0;
}

// int* ptr; declares a pointer to an integer.
// ptr = &x; stores the address of variable x in the pointer ptr.
// *ptr is called the dereference operator. It gives us access to the value stored at the memory address ptr is pointing to.
// So, ptr holds the address of x, and *ptr gives the value of x by accessing that address.