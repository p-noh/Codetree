#include <stdio.h>

int n;

int main(void) {
    scanf("%d", &n);
    // Please write your code here.

    int digit[20] = {0};
    int i;
    for(i = 0; n > 1; i++)
    {
        digit[i] = n % 2;
        n /= 2;
    }
    digit[i] = 1;
    for (i; i >= 0; i--)
        printf("%d", digit[i]);
    return 0;
}