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
    typedef struct s_position{
        int start;
        int end;
    } position;

    int cur = 0;
    int offset = 0;
    int dis;
    char dir;
    //가장 작은 수 찾기.
    for (int i=0; i<n; i++) {
        dis = distances[i];
        dir = directions[i];
        if (dir == 'L')
            cur -= dis;
        else
            cur += dis;
        if (cur < offset)
            offset = cur;
    }
    cur = -offset;
    position pos;
    int     line[2000] = {0};
    for (int i = 0; i < n; i++)
    {
        dis = distances[i];
        dir = directions[i];
        if (dir == 'L'){
            pos.start = cur - dis;
            pos.end = cur;
            cur -= dis;
        }
        else {
            pos.start = cur;
            pos.end = cur + dis;
            cur += dis;
        }
        for (int j = pos.start; j < pos.end; j++) {
            line[j]++;
        }
    }
    int ans = 0;
    for(int i = 0; i < 2000; i++){
        if (line[i] >= 2)
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}