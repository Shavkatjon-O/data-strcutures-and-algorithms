// Binary Search Algorithm Iterative Approach

#include <iostream>

using namespace std;

bool binary_search_iterative(int array[], int target, int max_size)
{
    int lower_bound = 0;
    int upper_bound = max_size - 1;

    while (lower_bound <= upper_bound)
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
                lower_bound = middle + 1;
            }
            else
            {
                upper_bound = middle - 1;
            }
        }
    }
    return false;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max_size = sizeof(array) / sizeof(array[0]);
    int target = 4;

    cout << "Result: " << binary_search_iterative(array, target, max_size) << endl;

    return 0;
}
