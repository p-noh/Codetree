#include <stdio.h>

int n;
int x[100], y[100];

int main(void) {
    int x_min = 0;
    int y_min = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
        if (x[i] < x_min)
            x_min = x[i];
        if (y[i] < y_min)
            y_min = y[i];
    }
    // Please write your code here.
    int grid[201][201] = {0};
    for (int i = 0; i < n; i++) {
        int x_start = x[i] - x_min;
        int y_start = y[i] - y_min;
        for (int x = x_start; x < x_start + 8; x++) {
            for (int y = y_start; y < y_start + 8; y++) {
                grid[x][y]++;
            }
        }
    }
    int ans = 0;
    for (int i =0; i < 201; i++) {
        for (int j = 0; j < 201; j++) {
            if (grid[i][j] != 0)
                ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}