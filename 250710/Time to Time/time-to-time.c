#include <stdio.h>

int A, B, C, D;

int main() {
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    // Please write your code here.
    int from_time;
    int to_time;

    from_time = 60 * A + B;
    to_time = 60 * C + D;
    printf("%d", to_time - from_time);
    return 0;
}