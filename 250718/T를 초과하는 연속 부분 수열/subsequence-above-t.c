#include <stdio.h>

int arr[1000];

int main() {
    int n, t;
    scanf("%d %d", &n, &t);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Please write your code here.
    int cnt = 0;
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || (arr[i] > t && arr[i-1] > t))
            cnt ++;
        else
            cnt = 1;
        if (max < cnt)
            max = cnt;
    }
    printf("%d\n", max);
    return 0;
}