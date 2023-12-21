# Linear Search Algorithm


def linear_search(array, target):
    for value in array:
        if value == target:
            return True
    return False


if __name__ == "__main__":
    array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    print("Array: " + str(array))

    target = int(input("Enter the target value: "))
    result = linear_search(array, target)

    print("Value found: " + str(result))
