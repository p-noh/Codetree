#include <stdio.h>

int n;
int x1[100];
int x2[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1[i], &x2[i]);
    }
    
    // Please write your code here.
    int min = 100;
    for (int i = 0; i < n; i++) {
        if (min > x1[i])
            min = x1[i];
    }
    if (min < 0){
        for (int i = 0; i < n; i++) {
            x1[i] += min;
            x2[i] += min;
        }
    }
    int arr[200] = {0};
    int from, to;
    for(int i = 0; i < n; i++)
    {
        from = x1[i];
        to = x2[i];
        while (from < to)
        {
            arr[from++]++;
        }
    }
    int max = 0;
    for(int i = 0; i < 200; i++){
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d\n", max);
    return 0;
}