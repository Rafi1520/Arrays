#include <stdio.h>
#include <stdlib.h>

brute force method 
#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int found = 0;

    printf("Duplicate elements: ");
    for (int i = 0; i < n; i++) {
        int count = 0;

        // Check if already checked
        int alreadyCounted = 0;
        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyCounted = 1;
                break;
            }
        }
        if (alreadyCounted)
            continue;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > 1) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

Sorting method
// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findDuplicates(int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    printf("Duplicate elements: ");
    int found = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            // Avoid printing same duplicate multiple times
            if (i == 1 || arr[i] != arr[i - 2]) {
                printf("%d ", arr[i]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("None");

    printf("\n");
}

int main() {
    int arr[] = {-4, 2, 3, -4, 2, 1, 5, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);
    return 0;
}