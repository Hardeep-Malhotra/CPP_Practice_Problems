# ASCII Value of a Character in C

In this article, we will discuss about the ASCII values that are bit numbers used to represent the character in the C programming language. We will also discuss why the ASCII values are needed and how to find the ASCII value of a given character in a C program.

## What is ASCII Value of a Character in C

American Standard Code for Information Interchange (ASCII) is a character encoding standard that assigns a unique numerical value to all characters including special symbols. In C programming, the ASCII value of the character is stored instead of the character itself.

Each character or special character is represented by some ASCII code.
Each ASCII code occupies 7 bits in memory.
Each character variable is assigned an ASCII value ranging from 0 to 127.

Example
Input: char ch = 'A';
Output: ASCII value of A is 65
Explanation: The character 'A' has an ASCII value of 65.

Input: char ch = 'z';
Output: ASCII value of z is 122
Explanation: The character 'z' has an ASCII value of 122.

## Why are ASCII Values Needed in C?

Digital computers store the information in the form of bits (0 or 1). So, to represent different characters, which can be very well over 200s, we use a sequence of bit that is stored in the memory in place of that character.

## ASCII was introduced to standardize this representation so that the

text written in one compiler can be read as it is in the other compiler. Otherwise, bit sequence representing the character 'A' in one compiler can represent the whole different thing in another compiler.

## How to Find ASCII Value of a Character in C?

There are two major ways to find the ASCII value of a character:

Using Format Specifier - Implicit
Using Typecasting - Explicit

## 1. Find ASCII Value of a Character Using Format Specifier

We can find the ASCII value of a character using the %d format specifier in the printf function instead of %c while printing the character. This happens because of the integer promotion where the character is converted to the corresponding ASCII value when some integer operation is performed on it.

### C Program To Print ASCII Value of a Character Using Format Specifier

// C program to print ASCII Value of Character using
// implicit conversion with format specifier.
#include <stdio.h>

int main() {
char c = 'k';

    // %d displays the integer value of
    // a character
    // %c displays the actual character
    printf("The ASCII value of %c is %d", c, c);
    return 0;

}

**Output**
The ASCII value of k is 107
Time complexity: O(1)
Auxiliary Space: O(1)

Apart from the method shown above, we can also find the ASCII value of a character using following methods:

