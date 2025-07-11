#include <stdio.h>
#include <string.h>

char binary[9];

int main() {
    scanf("%s", binary);
    // Please write your code here.
    int result = 0;
    for (int i = 0; i < strlen(binary); i++)
    {
        result = result*2 + binary[i] - '0';
    }
    printf("%d\n", result);
    return 0;
}