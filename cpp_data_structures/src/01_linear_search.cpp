// Linear Search

#include <iostream>

using namespace std;

bool linear_search(int array[], int target, int max_size)
{
    for (int i = 0; i < max_size; i++)
    {
        if (array[i] == target)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max_size = sizeof(array) / sizeof(array[0]);
    int target = 9;

    cout << "Result: " << linear_search(array, target, max_size) << endl;

    return 0;
}