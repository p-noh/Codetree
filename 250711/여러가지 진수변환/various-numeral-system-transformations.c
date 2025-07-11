#include <stdio.h>

int n, b;

int main() {
    scanf("%d %d", &n, &b);
    
    // Please write your code here.
    int num = n;
    int digits[20] = {0};
    int i;
    for(i = 0; num >= b; i++)
    {
        digits[i] = num % b;
        num /= b;
    }
    digits[i] = num;
    for (i; i >= 0; i--)
    {
        printf("%d", digits[i]);
    }
    return 0;
}