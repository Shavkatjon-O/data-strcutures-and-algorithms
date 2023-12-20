# Linear Search Algorithm Implementation In Python

# Runtime Complexity: O(n)
# Space Complexity: O(1)


def linear_search(array, target):
    for value in array:
        if value == target:  # If the value is found, return True
            return True
    return False  # If the value is not found, return False


if __name__ == "__main__":
    array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    target = int(input("Enter the target value: "))

    print(linear_search(array, target))
