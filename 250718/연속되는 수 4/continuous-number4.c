#include <stdio.h>
#define MAX_N 1000

int n;
int arr[MAX_N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Please write your code here.
    int cnt = 0;
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i-1] < arr[i])
            cnt++;
        else
            cnt = 1;
        if (cnt > max)
            max = cnt;
    }
    printf("%d\n", max);
    return 0;
}