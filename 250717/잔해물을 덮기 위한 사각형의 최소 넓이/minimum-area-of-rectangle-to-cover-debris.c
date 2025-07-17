#include <stdio.h>
#include <limits.h>

int main() {
    int r1_x1, r1_y1, r1_x2, r1_y2;
    int r2_x1, r2_y1, r2_x2, r2_y2;
    
    scanf("%d %d %d %d", &r1_x1, &r1_y1, &r1_x2, &r1_y2);
    scanf("%d %d %d %d", &r2_x1, &r2_y1, &r2_x2, &r2_y2);
    
    // Please write your code here.
    int grid[2001][2001] = {0};
    int offset = 1000;
    
    for (int i = r1_x1 + offset; i < r1_x2 + offset; i++) {
        for (int j = r1_y1 + offset; j < r1_y2 + offset; j++) {
            grid[i][j] = 1;
        }
    }
    for (int i = r2_x1 + offset; i < r2_x2 + offset; i++) {
        for (int j = r2_y1 + offset; j < r2_y2 + offset; j++) {
            grid[i][j] = 0;
        }
    }
    int x_min = INT_MAX, x_max = INT_MIN;
    int y_min = INT_MAX, y_max = INT_MIN;

    for(int i = 0; i < 2001; i++){
        for(int j = 0; j < 2001; j++) {
            if (grid[i][j] == 1) {
                if (i < x_min)
                    x_min = i;
                if (i > x_max)
                    x_max = i;
                if (j < y_min)
                    y_min = j;
                if (j > y_max)
                    y_max = j;
            }
        }
    }
    if (x_max < x_min || y_max < y_min)
        printf("0\n");
    else{
        int width = x_max - x_min + 1;
        int height = y_max - y_min + 1;
        printf("%d\n", width*height);
    }
    return 0;
}