# C++ Program to Find the Size of int, float, double and char
In this article, we will learn to write a C++ program to find the size of int, float, double, and char. It is important to know the size of different data types especially when working with large datasets to optimize memory usage.

The size of a variable can be determined using sizeof() operator in C++. The syntax of size of operator is:

To find the size of the four datatypes:

The four types of variables are defined as integerType, floatType, doubleType, and charType.
The size of the variables is calculated using the sizeof() operator.


#### C++ Program to Find the Size of a Data Types
// C++ program to find the size of int, char,
// float and double data types
#include <iostream>
using namespace std;

int main()
{
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    // Calculate and Print
    // the size of integer type
    cout << "Size of int is: " << sizeof(integerType)
         << "\n";

    // Calculate and Print
    // the size of doubleType
    cout << "Size of char is: " << sizeof(charType) << "\n";

    // Calculate and Print
    // the size of charType
    cout << "Size of float is: " << sizeof(floatType)
         << "\n";

    // Calculate and Print
    // the size of floatType
    cout << "Size of double is: " << sizeof(doubleType)
         << "\n";

    return 0;
}

