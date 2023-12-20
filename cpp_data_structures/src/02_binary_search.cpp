// Binary Search Algorithm Implemented In C++

// Runtime Complexity:
// - Best Case: O(1)
// - Worst Case: O(log n)
// - Average Case: O(log n)
// Space Complexity: O(1)

#include <iostream>

using namespace std;

bool IterativeBinarySearch(int arr[], int value, int maxSize)
{
    int lower = 0;
    int upper = maxSize - 1;
    bool foundFlag = false;

    while ((lower <= upper) && (foundFlag == false))
    {
        int mid = (lower + upper) / 2;
        if (arr[mid] == value)
        {
            foundFlag = true;
        }
        else
        {
            if (value < arr[mid])
            {
                upper = mid - 1;
            }
            else
            {
                lower = mid + 1;
            }
        }
    }
    if (foundFlag == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    cout << "binary search algorithm" << endl;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int maxSize = sizeof(arr) / sizeof(arr[0]);
    int value = 5;

    cout << "Array: ";
    for (int i = 0; i < maxSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Searching for value: " << value << endl;

    if (IterativeBinarySearch(arr, value, maxSize))
    {
        cout << "RESULT: Value FOUND" << endl;
    }
    else
    {
        cout << "RESULT: Value NOT FOUND" << endl;
    }

    return 0;
}