#include <stdio.h>

int main() {
    int array[100], Search, n, c;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &Search);

    for (c = 0; c < n; c++) {
        if (array[c] == Search) {
            printf("%d is present at location %d\n", Search, c + 1);
            break;
        }
    }

    if (c == n) {
        printf("%d isn't present in the array\n", Search);
    }

    return 0;
}
