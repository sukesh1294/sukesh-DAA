#include <stdio.h>
#include <stdlib.h>

int compareDescending(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i > 0) printf("\n");
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int trackingNumbers1[] = {2000, 1500, 3000, 4200};
    int n1 = sizeof(trackingNumbers1) / sizeof(trackingNumbers1[0]);

    qsort(trackingNumbers1, n1, sizeof(int), compareDescending);
    printf("Enter Package Tracking Number\n");
    printArray(trackingNumbers1, n1);
    printf("OUTPUT:\n");
    printArray(trackingNumbers1, n1);

    int trackingNumbers2[] = {1500, 6900, 8000, 1400};
    int n2 = sizeof(trackingNumbers2) / sizeof(trackingNumbers2[0]);

    qsort(trackingNumbers2, n2, sizeof(int), compareDescending);
    printf("Enter Package Tracking Number\n");
    printArray(trackingNumbers2, n2);
    printf("OUTPUT:\n");
    printArray(trackingNumbers2, n2);

    return 0;
}
