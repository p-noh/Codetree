#include <stdio.h>

int arr[1000];

int main(void) {
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Please write your code here.
    int cnt = 1;
    int max = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] == arr[i-1])
            cnt++;
        else 
            cnt = 1;
        if (cnt > max)
            max = cnt;
    }
    printf("%d\n", max);
    return 0;
}