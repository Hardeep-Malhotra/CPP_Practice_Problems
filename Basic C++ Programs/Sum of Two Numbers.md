# Add Two Numbers in C++

Given two integers, the task is to add these integer number and print their sum in C++.

### Examples

Input: a = 11, b = 9
Output: 20
Explanation: Sum of 11 + 9 = 20

Input: a = 1, b = 8
Output: 9
Explanation: Sum of 1 + 8 = 9

## Add Two Numbers Using Addition Operator

In C++, the simplest method for adding the two numbers is using the addition operator(+). This operator adds the given two values and return their sum.

// C++ program to add two number using
// addition operator
#include <bits/stdc++.h>
using namespace std;

int main() {
int a = 11, b = 9;

    // Adding the two numbers and printing
    // their sum
    cout << a + b;
    return 0;

}
