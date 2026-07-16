#include <stdio.h>

void main() {

    int A[3] = {10, 20, 30};
    int B[3] = {40, 50, 60};
    int C[6];
    
    for (int i = 0; i < 3; i++) {
        C[i] = A[i];
    }
    
    for (int i = 0; i < 3; i++) {
        C[i + 3] = B[i];
    }
    
    printf("Merged Element C: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", C[i]);

    }
   
 printf("\n");

}