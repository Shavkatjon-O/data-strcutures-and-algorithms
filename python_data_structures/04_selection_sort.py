# Selection Sort Algorithm


def selection_sort(array):
    array_size = len(array)

    index = 0
    while index < array_size:
        min_index = index
        for i in range(index + 1, array_size):
            if array[i] < array[index]:
                min_index = i

        array[index], array[min_index] = array[min_index], array[index]
        index += 1

    return array


if __name__ == "__main__":
    array = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]
    sorted_array = selection_sort(array)
    print(sorted_array)
