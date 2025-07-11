#include <stdio.h>
#include <string.h>

int A, B;
char N[10];

int main() {
    scanf("%d %d", &A, &B);
    scanf("%s", N);
    
    // Please write your code here.
    int num = 0;
    int i;
    for (i = 0; i < strlen(N); i++)
    {
        num = num*A + N[i] - '0';
    }
    int ans[64] = {0};
    for(i = 0; num >= B; i++)
    {
        ans[i] = num % B;
        num /= B;
    }
    ans[i] = num;
    for(i; i>=0; i--)
        printf("%d", ans[i]);
    return 0;
}