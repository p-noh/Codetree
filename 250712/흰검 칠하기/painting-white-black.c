#include <stdio.h>

int x[1000];
char d[1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &x[i], &d[i]);
    }
    // Please write your code here.
    typedef struct s_tile{
        int w;
        int b;
        char col;
    } tile;

    typedef struct s_position{
        int start;
        int end;
    }   position;

    int cur = 0;
    int offset = 0;
    int dis;
    char dir;

    for (int i=0; i<n; i++) {
        dis = x[i];
        dir = d[i];
        if (dir == 'L')
            cur -= dis;
        else
            cur += dis;
        if (cur < offset)
            offset = cur;
    }
    cur = -offset;
    tile    line[2000001] = {0};
    position    pos;
    int min = 2000000, max = 0;
    for (int i = 0; i < n; i++)
    {
        dis = x[i];
        dir = d[i];
        if (dir == 'L'){
            pos.start = cur - dis + 1;
            pos.end = cur + 1;
            cur = pos.start;
        }
        else {
            pos.start = cur;
            pos.end = cur + dis;
            cur = pos.end - 1;
        }
        if (pos.start < min) min = pos.start;
        if (pos.end > max) max = pos.end;

        for (int j = pos.start; j < pos.end; j++) {
            if (line[j].col == 'g') continue;
            if (dir == 'L')
                line[j].w++;
            else if (dir == 'R')
                line[j].b++;
            if (line[j].w >= 2 && line[j].b >= 2)
                line[j].col = 'g';
            else
                line[j].col = (dir == 'L') ? 'w' : 'b';
        }
    }
    int white = 0;
    int black = 0;
    int grey = 0;
    for (int i = min; i < max; i++)
    {
        if (line[i].col == 'w')
            white++;
        else if (line[i].col == 'b')
            black++;
        else if (line[i].col == 'g')
            grey++;
    }
    printf("%d %d %d", white, black, grey);
    return 0;
}