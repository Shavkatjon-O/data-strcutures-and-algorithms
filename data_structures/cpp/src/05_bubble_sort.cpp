// Bubble Sort Algorithm

#include <iostream>

using namespace std;

// TODO: Fix bug

void bubble_sort(int array[], int max_size)
{
    while (true)
    {
        bool swapped = false;
        for (int i = 0; i < max_size; i++)
        {
            if (array[i + 1] < array[i])
            {
                int temp = array[i + 1];
                array[i + 1] = array[i];
                array[i] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
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

    // Start Bubble Sort
    bubble_sort(array, max_size);

    // Display Array After Sorting
    cout << "Sorted array: ";
    display_array(array, max_size);

    return 0;
}