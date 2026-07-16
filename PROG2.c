// Write a program to create an array of size 10, input values and display sum and average  
of all elements in the array.

#include <stdio.h>

void main() {
    int a[10];
    int sum = 0;
    float average;

    printf("Enter 10 values:\n");

    for (int i = 0; i < 10; i++) {

        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }

    average = (float)sum / 10;

    printf("\n--- Results ---\n");
    printf("Sum of all elements = %d\n", sum);
    printf("Average of all elements = %.2f\n", average);

}