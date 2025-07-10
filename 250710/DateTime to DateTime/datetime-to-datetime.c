#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    // Please write your code here.
    int from_total = 11*24*60 + 11*60 + 11;
    int to = A*24*60 + B*60 + C;
    if (to < from_total)
        printf("%d\n", -1);
    printf("%d\n", to - from_total);
    return 0;
}