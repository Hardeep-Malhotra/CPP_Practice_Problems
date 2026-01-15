#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Step 1: Dynamic array create
    int *p = new int[n];

    // Step 2: Values store
    for(int i = 0; i < n; i++) {
        p[i] = (i+1) * 10;
    }

    // Step 3: Print using pointer arithmetic
    cout << "Values in 1D Dynamic Array:\n";
    for(int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }

    // Step 4: Free memory
    delete[] p;

    return 0;
}


// Explanation

// int *p = new int[n];
// 👉 Heap memory me 5 integers ka block create hota hai.
// 👉 p me first element ka address store hota hai.

// p[i] = (i+1)*10;
// 👉 Array me values: 10,20,30,40,50

// *(p+i)
// 👉 Pointer arithmetic se element access
// 👉 Same as p[i]

// delete[] p;
// 👉 Memory free karna important hai (memory leak se bachne ke liye)