#include <stdio.h>
#include <string.h>

char binary[11];

int main() {
    scanf("%s", binary);
    // Please write your code here.
    int ans = 0;
    int i;
    for(i  = 0; i < strlen(binary); i++)
    {
        ans = ans*2 + binary[i] - '0';
    }
    //printf("%d\n", ans);
    ans *= 17;
    //printf("%d\n", ans);
    int digits[2000] = {0};
    for (i=0; ans >= 2; i++)
    {
        digits[i] = ans % 2;
        ans /= 2;
    }
    digits[i] = ans;
    for (i; i>=0; i--)
    {
        printf("%d", digits[i]);
    }
    return 0;
}