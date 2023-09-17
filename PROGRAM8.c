#include <stdio.h>

int binarySearch(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target)
            return mid;

        if (array[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int size, target;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    printf("\nEnter %d sorted integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nEnter the element to search for: ");
    scanf("%d", &target);

    int result = binarySearch(array, size, target);

    if (result != -1) {
        printf("\nElement %d found at index %d.\n", target, result);
    } else {
        printf("\nElement %d not found in the array.\n", target);
    }

    return 0;
}

