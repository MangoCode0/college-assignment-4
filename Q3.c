//[3] C Program to Calculate Standard Deviation.

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0.0, mean, standardDeviation = 0.0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    float arr[n];
    
    printf("Enter the elements: \n");
    for (i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    
    mean = sum / n;
    
    for (i = 0; i < n; ++i) {
        standardDeviation += pow(arr[i] - mean, 2);
    }
    
    standardDeviation = sqrt(standardDeviation / n);
    printf("Standard Deviation = %.2f", standardDeviation);
    
    return 0;
}
