#include <stdio.h>

int arr[1000];

int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Please write your code here.
    int sign_cnt = 1;
    int max = 1;
    for (i = 1; i < n; i++) {
        if (arr[i] >= 0 && arr[i-1] >= 0)
            sign_cnt ++;
        else if (arr[i] < 0 && arr[i-1] < 0)
            sign_cnt++;
        else
            sign_cnt = 1;
        if (sign_cnt > max)
            max = sign_cnt;
    }
    printf("%d\n", max);
    return 0;
}