# Understanding First C++ Program

The "Hello World" program is the first step towards learning any programming language and is also one of the most straightforward programs you will learn. It is the basic program that demonstrates the working of the coding process. All you have to do is display the message "Hello World" on the output screen.

## C++ Hello World Program
This program helps you to learn the fundamental structure of a program, and it also learn the basic syntax for the programming language.


## Preprocessor Directives
"#include" is a preprocessor directive that tells the compiler to include the content of a file in the source code. For example, #include<iostream> tells the compiler to include the input-output library which contains all C++'s input/output library functions.


#include <iostream>
## Header Files
A header file contains functions, global variables and macros, etc that can be used by any other C program by including that particular header file using “#include” preprocessor. Header files generally ends with the .h extension although in modern C++ many header files do not have the .h extension


// header file without .h extension
#include <iostream> 

// header file with .h extension
#include<string.h>

## Namespace
Namespaces are used to group logically related functions, variables and other entities to avoid name conflicts. The line "using namespace std" is used to import the entity of the std namespace into the current namespace of the program. It is basically the space where all the inbuilt features of C++ are declared.

For example: std::cout

using namespace std

## Main Function
The main() function is the entry point of every C++ program when the program is executed the code written in the main functions is executed first. The opening braces '{' indicates the beginning of the main function and the closing braces '}' indicates the ending of the main function.


int main() 
{
    //Program code
}
## Comments
The comment are used to display additional information about the program that do not contain any programming logic and are not the part of executable program and are purely used for documentation and provide explanation or notes about the code. When a comment is encountered by a compiler, the compiler simply skips that line of code.




// C++ program to print "Hello World"
## Output Statement
The cout is a output statement in C++ that is used to display output on the console screen. Everything followed by the character << in double quotes " " is displayed on the output screen. The semi-colon character at the end of the statement is used to indicate that the statement is ending there.


cout << "Hello World";

## Return Statement
The return statement is used to return a value from a function and indicates the finishing of a function. Here, it is used to sent the signal of successful execution of the main function

return 0;
Also, as you can see, the cout and the return statement have been indented or moved to the right side. This is done to make the code more readable. We must always use indentations and comments to make the code more readable. 