# Binary Search Algorithm Recursive Approach


def binary_search_recursive(array, target, lower_bound, upper_bound):
    if lower_bound > upper_bound:
        return False
    else:
        middle = (lower_bound + upper_bound) // 2

        if array[middle] == target:
            return True
        else:
            if target > array[middle]:
                return binary_search_recursive(
                    array,
                    target,
                    lower_bound=middle + 1,
                    upper_bound=upper_bound,
                )
            else:
                return binary_search_recursive(
                    array,
                    target,
                    lower_bound=lower_bound,
                    upper_bound=middle - 1,
                )


if __name__ == "__main__":
    array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    print("Array: " + str(array))

    target = int(input("Enter the target value: "))
    result = binary_search_recursive(array, target, 0, len(array) - 1)

    print("Value found: " + str(result))
