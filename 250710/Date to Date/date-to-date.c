#include <stdio.h>

int main(void) {
    int m1, d1, m2, d2;
    scanf("%d %d %d %d", &m1, &d1, &m2, &d2);
    
    // Please write your code here.
    int from = 0;
    int to = 0;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (m1 > 0)
    {
        from += num_of_days[m1];
        m1--;
    }
    from += d1;
    while (m2 > 0)
    {
        to += num_of_days[m2];
        m2--;
    }
    to += d2;
    printf("%d\n", to - from + 1);
    return 0;
}