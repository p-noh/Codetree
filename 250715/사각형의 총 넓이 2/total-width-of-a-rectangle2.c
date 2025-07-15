#include <stdio.h>

int n;
int x1[10], y1[10], x2[10], y2[10];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
    }
    // Please write your code here.
    int x_min = 0;
    int y_min = 0;
    for (int i = 0; i < n; i++)
    {
        if (x1[i] < x_min)
            x_min = x1[i];
        if (y1[i] < y_min)
            y_min = y1[i];
    }

    int grid[201][201] = {0};
    for (int i = 0; i < n; i++)
    {
        int x_start = x1[i] + x_min;
        int x_end = x2[i] + x_min;
        int y_start = y1[i] + y_min;
        int y_end = y2[i] + y_min;
        for (int j = x_start; j < x_end; j++)
        {
            for (int k = y_start; k < y_end; k++)
                grid[j][k] = 1;
        }
    }

    int ans = 0;
    for (int i = 0; i < 201; i++)
    {
        for (int j = 0; j < 201; j++)
        {
            if (grid[i][j] == 1)
                ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}