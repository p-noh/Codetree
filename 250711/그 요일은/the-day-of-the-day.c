#include <stdio.h>
#include <string.h>

int main() {
    int m1, d1, m2, d2;
    char A[4];
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    scanf("%s", A);
    
    // Please write your code here.
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int from = 0;
    int to = 0;
    for(int i = 1; i < m1; i++)
    {
        from+=num_of_days[i];
    }
    from += d1;
    for (int i = 1; i < m2; i++)
    {
        to += num_of_days[i];
    }
    to += d2;
    int weeks = (to - from) / 7;
    int today = (to - from) % 7;
    int target = -1;
    for(int i = 0; i < 7; i++)
    {
        if (strcmp(A, days[i]) == 0)
        {
            target = i;
            break;
        }
    }
    if (target <= today)
        weeks++;
    printf("%d\n", weeks);
    return 0;
}