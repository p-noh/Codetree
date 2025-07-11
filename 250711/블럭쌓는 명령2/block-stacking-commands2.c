#include <stdio.h>
#include <stdlib.h>

int n, k;
int a[101], b[101];

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= k; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    
    // Please write your code here.
    int *arr = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
        arr[i] = 0;
    for (int i = 1; i <= k; i++)
    {
        int from = a[i] - 1;
        int to = b[i] - 1;
        while (from <= to)
        {
            arr[from++]++;
        }
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d\n", max);
    return 0;
}