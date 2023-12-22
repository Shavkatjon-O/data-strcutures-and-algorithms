# Bubble Sort Algorithm


def bubble_sort(array):
    while True:
        swapped = False
        for i in range(len(array) - 1):
            if array[i + 1] < array[i]:
                array[i + 1], array[i] = array[i], array[i + 1]
                swapped = True
        if not swapped:
            break
    return array


if __name__ == "__main__":
    array = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    print(array)
    sorted_array = bubble_sort(array)
    print(array)
