# Input in C++

The cin object in C++ is used to accept the input from the standard input device i.e., keyboard. it is the instance of the class istream. It is associated with the standard C input stream stdin. The extraction operator(>>) is used along with the object cin for reading inputs. The extraction operator extracts the data from the object cin which is entered using the keyboard.

## Note: 
Multiple inputs can also be taken using the extraction operators(>>) with cin.
// C++ program to demonstrate the taking
// multiple inputs from the user

#include <iostream>
using namespace std;

// Driver Code
int main()
{
    string name;
    int age;

    // Take multiple input using cin
    cin >> name >> age;

    // Print output
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;

    return 0;
}