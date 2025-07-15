#include <stdio.h>

int x1[3], y1[3];
int x2[3], y2[3];

int main(void) {
    int min_x = 0;
    int min_y = 0;
    for (int i = 0; i < 3; i++) {
        scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
        if (x1[i] < min_x)
            min_x = x1[i];
        if (y1[i] < min_y)
            min_y = y1[i];
    }
    
    // Please write your code here.
    int grid[2001][2001] = {0};
    for (int i = 0; i < 2; i++) {
        for (int x = x1[i]; x < x2[i]; x++) {
            for (int y = y1[i]; y < y2[i]; y++) {
                grid[x-min_x][y-min_y] = 1;
            }
        }
    }
    for (int i = x1[2]; i < x2[2]; i++) {
        for (int j = y1[2]; j < y2[2]; j++) {
            grid[i - min_x][j - min_y] = 0;
        }
    }
    int ans = 0;
    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < 2001; j++) {
            if (grid[i][j] == 1)
                ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}