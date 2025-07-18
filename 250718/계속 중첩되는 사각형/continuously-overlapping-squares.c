#include <stdio.h>

#define MAX_N 10
#define OFFSET 100

int x1[MAX_N], y1[MAX_N], x2[MAX_N], y2[MAX_N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }
    
    // Please write your code here.
    int gird[201][201] = {0};

    for (int i = 0; i < n; i++) {
        for (int x = x1[i]; x < x2[i]; x++){
            for (int y = y1[i]; y < y2[i]; y++) {
                if (i % 2 == 0) {
                    gird[x][y] = 1;
                }
                else
                    gird[x][y] = 2;
            }
        }
    }
    int ans = 0;
    for (int x = 0; x < 201; x++) {
        for (int y = 0; y < 201; y++) {
            if (gird[x][y] == 2)
                ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}