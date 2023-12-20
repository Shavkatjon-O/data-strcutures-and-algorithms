// Linear Search Algorithm Implemented In C++

// Runtime Complexity: O(n)

#include <iostream>

using namespace std;

bool linearSearch(int arr[], int value, int maxSize)
{
    for (int i = 0; i < maxSize; i++)
    {
        if (arr[i] == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maxSize = sizeof(arr) / sizeof(arr[0]);
    int value = 5;

    cout << "Array: ";
    for (int i = i; i < maxSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Searching for value: " << value << endl;

    if (linearSearch(arr, value, maxSize))
    {
        cout << "RESULT: Value FOUND" << endl;
    }
    else
    {
        cout << "RESULT: Value NOT FOUND" << endl;
    }

    return 0;
}