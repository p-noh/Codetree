#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int x[1000];
    char c[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &x[i], &c[i]);
    }
    
    // Please write your code here.
    char tiles[20000] = {0};
    int cnt;
    char dir;
    int position = 10000;
    for (int i = 0; i < n; i++){
        cnt = x[i];
        dir = c[i];
        if (dir == 'L')
        {
            tiles[position] = 'w';
            while(--cnt)
            {
                tiles[--position] = 'w';
            }
        }
        else if (dir == 'R')
        {
            tiles[position] = 'b';
            while (--cnt)
            {
                tiles[++position] = 'b';
            }
        }
    }
    int white = 0;
    int black = 0;
    for(int i = 0; i < 20000; i++)
    {
        if(tiles[i] == 'w')
            white++;
        else if(tiles[i] == 'b')
            black++;
    }
    printf("%d %d\n", white, black);
    return 0;
}