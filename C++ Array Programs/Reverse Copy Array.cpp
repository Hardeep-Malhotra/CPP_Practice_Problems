/*******************************************************
 * Program Name : Copy Array in Reverse Order
 * Language     : C++
 * Topic        : Arrays
 *
 * Description  :
 * This program copies the contents of one array
 * into another array in reverse order.
 *
 * Example:
 *   Input  : arr1 = [1, 2, 3, 4, 5]
 *   Output : arr2 = [5, 4, 3, 2, 1]
 *******************************************************/

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Read size of array
    cout << "Enter size of array: ";
    cin >> n;

    int arr1[n], arr2[n];

    // Input elements in first array
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // Copy elements in reverse order
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[n - 1 - i];
    }

    // Print second array
    cout << "Second array (reverse order): ";
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
