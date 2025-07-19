#include <stdio.h>
#include <stdlib.h>

int n, m;
int A_v[1000], A_t[1000];
int B_v[1000], B_t[1000];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &A_v[i], &A_t[i]);
    }
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &B_v[i], &B_t[i]);
    }
    
    // Please write your code here.
    int A_pos[1000000] = {0};
    int B_pos[1000000] = {0};

    int total_time_A = 0;
    for (int i = 0; i < n; i++) {
        for (int t = 0; t < A_t[i]; t++) {
            A_pos[total_time_A + t + 1] = A_pos[total_time_A + t] + A_v[i];
        }
        total_time_A += A_t[i];
    }
    int total_time_B = 0;
    for (int i = 0; i < m; i++) {
        for (int t = 0; t < B_t[i]; t++) {
            B_pos[total_time_B + t + 1] = B_pos[total_time_B + t] + B_v[i];
        }
        total_time_B += B_t[i];
    }
    char *first = calloc(total_time_A +1, sizeof(char));
    for (int i = 1; i <= total_time_A; i++) {
        if (A_pos[i] > B_pos[i])
            first[i] = 'A';
        else if(A_pos[i] < B_pos[i])
            first[i] = 'B';
        else
            first[i] = first[i - 1];
    }
    int ans = 0;
    for (int i = 0; i < total_time_A; i++) {
        if (first[i] == 'A' && first[i+1] == 'B')
            ans++;
        else if(first[i] == 'B' && first[i+1] == 'A')
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}