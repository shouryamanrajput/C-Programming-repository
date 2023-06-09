#include <stdio.h>

// Function to read an array
void readArray(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// Drive code
int main() {
    int arr[10], size;
    // Input size and elements of array
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array:\n");
    readArray(arr, size);

    // Print the array
    printf("\nEntered array is: ");
    printArray(arr, size);
    printf("\n");

    return 0;
}
