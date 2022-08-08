#include <stdio.h>
  
void biggest() {
    int A, B, C;
  
    printf("Enter the numbers A, B and C to find largest: ");
    scanf("%d %d %d", &A, &B, &C);
  
    if (A >= B && A >= C)
        printf("%d is the largest number.", A);
  
    if (B >= A && B >= C)
        printf("%d is the largest number.", B);
  
    if (C >= A && C >= B)
        printf("%d is the largest number.\n", C);
  
   // return 0;
}
