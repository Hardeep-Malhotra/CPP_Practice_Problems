#include <iostream>
using namespace std;

int main()
{
    int rows = 3, cols = 3;

    // Step 1: Create array of pointers (rows)
    int **p = new int *[rows];

    // Step 2: Create columns for each row
    for (int i = 0; i < rows; i++)
    {
        p[i] = new int[cols];
    }

    // Step 3: Store values
    int x = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            p[i][j] = x * 10;
            x++;
        }
    }

    // Step 4: Print values
    cout << "2D Dynamic Array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    // Step 5: Free memory
    for (int i = 0; i < rows; i++)
    {
        delete[] p[i];
    }
    delete[] p;

    return 0;
}

// Dynamic 1D array:
// int *p = new int[n]; creates array in heap.

// Dynamic 2D array:
// int **p = new int*[rows]; creates array of pointers.
// p[i] = new int[cols]; creates columns.

// delete[] is used to free heap memory.