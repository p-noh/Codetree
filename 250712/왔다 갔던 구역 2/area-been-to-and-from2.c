#include <stdio.h>
#define MAX_N 100

int n;
int distances[MAX_N];
char directions[MAX_N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &distances[i], &directions[i]);
    }
    // Please write your code here.
    int line[2001] = {0};
    char dir;
    int cnt;
    int position = 0;
    int offset = 0;
    for (int i = 0; i < n; i++)
    {
        dir = directions[i];
        cnt = distances[i];
        if (dir == 'L')
            position -= cnt;
        else
            position += cnt;
        if (position < offset)
            offset = position;
            
    }
    position = -offset;
    for (int i = 0; i < n; i++)
    {
        dir = directions[i];
        cnt = distances[i];
        while (cnt--)
        {
            line[position]++;
            if (dir == 'R')
                position++;
            else
                position--;
        }
    }
    int ans = 0;
    for (int i = 0; i < 2000; i++)
    {
       if (line[i] >= 2)
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}