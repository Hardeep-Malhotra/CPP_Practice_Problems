#include <iostream>
#include <algorithm>
using namespace std;

bool CheckArray(int arr1[], int arr2[], int n, int m)
{

    if (n != m)
    {
        return false;
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};

    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr1) / sizeof(int);

    if (CheckArray(arr1, arr2, n, m))
    {
        cout << " Array are Equal." << endl;
    }
    else
    {
        cout << "Array are NOT Equal." << endl;
    }

    return 0;
}