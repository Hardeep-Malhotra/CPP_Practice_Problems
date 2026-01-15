#include <iostream>
using namespace std;

int main()
{
    int a = 50;
    char b = 'K';
    float c = 9.8f;

    void *ptr; // Void Pointer

    // Pointing to int
    ptr = &a;
    cout << "Integer value = " << *(int *)ptr << endl;

    // Pointing to char
    ptr = &b;
    cout << "Character value = " << *(char *)ptr << endl;

    // Pointing to float
    ptr = &c;
    cout << "Float value = " << *(float *)ptr << endl;

    return 0;
}
