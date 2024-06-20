#include <stdio.h>

int main() {
    int A, B, C;
    
    printf("Enter number A: ");
    scanf("%d", &A);
    
    printf("Enter number B: ");
    scanf("%d", &B);
    
    printf("Enter number C: ");
    scanf("%d", &C);
    
    int avg = (A + B + C) / 3;
    printf("Average: %d\n", avg);
    
    return 0;
}
