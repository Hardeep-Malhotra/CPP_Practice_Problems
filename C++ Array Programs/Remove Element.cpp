#include <iostream>
using namespace std;

int remove_All_Occurrences(int arr[], int n, int target)
{

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] != target)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    return k;
};

int main()
{
    int arr[] = {1, 4, 3, 6, 8, 3, 9, 10, 3, 3, 7};
    int n = sizeof(arr) / sizeof(int);
    int target = 3;
    int k = remove_All_Occurrences(arr, n, target);

    for (int i = 0; i < k; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }

    return 0;
}