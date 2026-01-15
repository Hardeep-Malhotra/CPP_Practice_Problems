# C++ Program To Multiply Two Floating-Point Numbers
Here, we will see how to multiply two floating-point numbers using the C++ program.



Floating point numbers are numbers that include both integer part and fractional parts represented in the form of decimal and exponential values. float data type is used to store floating point values.



For example

Input  :  A =1.2, B = 3.0
<!-- Output  :  3.6 -->


We can multiply two floating-point numbers in C++ by using Multiplication Operator (*)

## C++ Program To Multiply Two Floating-Point Numbers
The two floating-point numbers are multiplied using the function that uses the arithmetic operator ( * ), and the product is stored in the variable product.

// C++ program to multiply two
// floating point numbers
#include <iostream>
using namespace std;

// Creating a user-defined function
// called mul_floatnumbers that
// multiplies the numbers passed to
// it as an input. It gives you the
// product of these numbers.
float mul_floatnumbers(float a, float b) { return a * b; }

// Driver code
int main()
{
    float A = 1.2, B = 3.0, product;

    // Calling mul_floatnumbers function
    product = mul_floatnumbers(A, B);

    // Printing the output
    cout << product;

    return 0;
}

### Complexity Analysis
**Time Complexity: O(1)**
**Auxiliary Space: O(1)**