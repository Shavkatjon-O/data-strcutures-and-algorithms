// Linear Search

#include <iostream>

using namespace std;

bool linear_search(int array[], int target, int max_size)
{
    for (int i = 0; i < max_size; i++)
    {
        if (array[i] == target)
        {
            cout << "==> CHECK " << array[i] << " == " << target << endl;
            return true;
        }
        cout << "==> CHECK " << array[i] << " != " << target << endl;
    }
    return false;
}

void display_array(int array[], int max_size)
{
    cout << "[ ";
    for (int i = 0; i < max_size; i++)
    {
        if (i == max_size - 1)
        {
            cout << array[i];
        }
        else
        {
            cout << array[i] << ", ";
        }
    }
    cout << " ]" << endl;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max_size = sizeof(array) / sizeof(array[0]);
    int target = 9;

    cout << "ARRAY: ";
    display_array(array, max_size);

    cout << "TARGET: " << target << endl
         << endl;

    if (linear_search(array, target, max_size))
    {
        cout << endl
             << "RESULT: FOUND" << endl;
    }
    else
    {
        cout << "RESULT: NOT FOUND" << endl;
    }

    return 0;
}