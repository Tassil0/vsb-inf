import random


def selection_sort(arr) -> None:
    for i in range(0, len(arr)):
        smallest = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[smallest]:
                smallest = j

        if i != smallest:
            tmp = arr[i]
            arr[i] = arr[smallest]
            arr[smallest] = tmp


def bubble_sort(arr):
    for i in range(0, len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] > arr[j]:
                tmp = arr[i]
                arr[i] = arr[j]
                arr[j] = tmp


def insertion_sort(arr):
    for i in range(0, len(arr)):
        j = i
        while j > 0 and arr[j - 1] > arr[j]:
            tmp = arr[j]
            arr[j] = arr[j - 1]
            arr[j - 1] = tmp
            j -= 1


def partition(arr, left: int, right: int) -> int:
    pivot = arr[right]
    i = left

    for j in range(left, right):
        if arr[j] < pivot:
            tmp = arr[i]
            arr[i] = arr[j]
            arr[j] = tmp
            i += 1

    tmp = arr[right]
    arr[right] = arr[i]
    arr[i] = tmp

    return i


def quick_sort(arr, left: int, right: int) -> None:
    if left > right:
        return

    pivot = partition(arr, left, right)

    quick_sort(arr, left, pivot - 1)
    quick_sort(arr, pivot + 1, right)


def binary_search(arr, key) -> int:
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = int(left + (right - left) / 2)

        if arr[mid] == key:
            return mid
        elif arr[mid] > key:
            right = mid - 1
        elif arr[mid] < key:
            left = mid + 1

    return -1


def interpolation_search(arr, key) -> int:
    low = 0
    high = len(arr) - 1

    while arr[high] != arr[low] and key >= arr[low] and key <= arr[high]:
        mid = int(low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low])))

        if arr[mid] < key:
            low = mid + 1

        if arr[mid] > key:
            high = mid - 1

        if arr[mid] == key:
            return mid

    if key == arr[low]:
        return low
    else:
        return -1


def main() -> None:
    arr = [random.randint(1, 250)]

    for number in range(1, 20):
        arr.append(random.randint(1, 250))

    arr[15] = 85

    quick_sort(arr, 0, len(arr) - 1)

    print(arr[binary_search(arr, 85)])

    for number in arr:
        print(number)


main()
