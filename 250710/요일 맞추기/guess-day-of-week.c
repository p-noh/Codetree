#include <stdio.h>

int main() {
    int m1, d1, m2, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    
    // Please write your code here.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int from = 0;
    int to = 0;
    for(int i=0; i<m1; i++)
        from += num_of_days[i];
    from += d1;
    for(int i=0; i<m2; i++)
        to += num_of_days[i];
    to += d2;
    int ans = 0;
    if (d2 > d1)
        ans = (d2 - d1) % 7;
    else
        ans = 6 - ((d1 - d2) % 7);
    printf("%s\n", day[ans]);
    return 0;
}