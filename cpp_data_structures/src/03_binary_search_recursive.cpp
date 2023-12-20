// Binary Search Algorithm Recursive Approach

#include <iostream>

using namespace std;

bool binary_search_recursive(int array[], int target, int lower_bound, int upper_bound)
{
    if (lower_bound > upper_bound)
    {
        return false;
    }
    else
    {
        int middle = (lower_bound + upper_bound) / 2;

        if (array[middle] == target)
        {
            return true;
        }
        else
        {
            if (array[middle] < target)
            {
                return binary_search_recursive(array, target, middle + 1, upper_bound);
            }
            else
            {
                return binary_search_recursive(array, target, lower_bound, middle - 1);
            }
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int max_size = sizeof(array) / sizeof(array[0]);
    int target = 5;

    cout << "Result: " << binary_search_recursive(array, target, 0, max_size - 1) << endl;

    return 0;
}