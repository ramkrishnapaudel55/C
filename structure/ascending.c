#include <stdio.h>

int main() {
    int n, i, j, b;
    printf("Enter the number of integers you want to display in descending order: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the integers one by one:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // bubble sort to sort the array in descending order
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    // display the sorted array
    printf("The integers in descending order are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
