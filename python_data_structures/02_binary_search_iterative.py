# Binary Search Algorithm Iterative Approach


def binary_search_iterative(array, target):
    array_size = len(array)
    lower_bound = 0
    upper_bound = array_size - 1

    while lower_bound <= upper_bound:
        middle = (lower_bound + upper_bound) // 2
        if array[middle] == target:
            return True
        else:
            if target > array[middle]:
                lower_bound = middle + 1
            else:
                upper_bound = middle - 1

    return False


if __name__ == "__main__":
    array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    print("Array: " + str(array))

    target = int(input("Enter the target value: "))
    result = binary_search_iterative(array, target)

    print("Value found: " + str(result))
