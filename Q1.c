//[1] write a C Program to Calculate Average Using Arrays.


#include <stdio.h>

#define MAX_SIZE 100  // Maximum array size

int main() {
    int arr[MAX_SIZE];
    int n, i;
    float sum = 0.0, average;

    // Input the number of elements in the array
    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter %d elements:\t", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum of elements
    }

    // Calculate average
    average = sum / n;

    //Display the average
    printf("Average of the elements = %.2f\n", average);

    return 0;
}