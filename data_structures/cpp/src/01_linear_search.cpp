// Linear Search Algorithm

#include <iostream>

using namespace std;

void linear_search(int array[], int target, int max_size)
{
    for (int i = 0; i < max_size; i++)
    {
        if (array[i] == target)
        {
            cout << "Target value found!" << endl;
            break;
        }
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max_size = sizeof(array) / sizeof(array[0]);
    int target = 5;

    // Implement linear search
    linear_search(array, target, max_size);

    return 0;
}