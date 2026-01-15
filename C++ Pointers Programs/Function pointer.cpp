#include <iostream>
using namespace std;

// Step 1: Normal function
int multiply(int a, int b) {
    return a * b;
}

int main() {
    
    // Step 2: Declare function pointer
    int (*funcPtr)(int, int);

    // Step 3: Store function address
    funcPtr = multiply;

    // Step 4: Call function using pointer
    int result = funcPtr(5, 4);

    cout << "Result = " << result << endl;

    return 0;
}
