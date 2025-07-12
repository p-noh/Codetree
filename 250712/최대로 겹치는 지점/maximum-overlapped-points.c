#include <stdio.h>

int n;
int a[101], b[101];

int main() {
    int i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        scanf("%d %d", &a[i], &b[i]);
    
    // Please write your code here.
    int line[101]= {0};
    int from, to;
    for(i = 1; i <= n; i++)
    {
        from = a[i];
        to = b[i];
        while (from<=to)
        {
            line[from++]++;
        }
    }
    int max = 0;
    for(i = 1; i <= 100; i++)
    {
        if (line[i] > max)
            max = line[i];
    }
    printf("%d\n", max);
    return 0;
}