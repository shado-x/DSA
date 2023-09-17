#include <stdio.h>

void bubbleSort(int array[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    printf("\nEnter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, n);

    printf("\nSorted list in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}


