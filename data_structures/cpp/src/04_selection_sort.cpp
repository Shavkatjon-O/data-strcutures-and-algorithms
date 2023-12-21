// Selection Sort Algorithm

#include <iostream>

using namespace std;

void selection_sort(int array[], int max_size)
{
    for (int i = 0; i < max_size; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < max_size; j++)
        {
            if (array[j] < array[i])
            {
                min_index = j;
            }
        }
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

void display_array(int array[], int max_size)
{
    for (int i = 0; i < max_size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int max_size = sizeof(array) / sizeof(array[0]);

    // DIsplay Array Before Sorting
    cout << "Array to sort: ";
    display_array(array, max_size);

    // Start Selection Sort
    selection_sort(array, max_size);

    // Display Array After Sorting
    cout << "Sorted array: ";
    display_array(array, max_size);

    return 0;
}