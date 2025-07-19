#include <stdio.h>

int N, M;
char A_dir[1000];
int A_time[1000];
char B_dir[1000];
int B_time[1000];

int main() {
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++) {
        scanf(" %c %d", &A_dir[i], &A_time[i]);
    }
    
    for (int i = 0; i < M; i++) {
        scanf(" %c %d", &B_dir[i], &B_time[i]);
    }
    
    // Please write your code here.
    int A_pos[1000000] = {0};
    int B_pos[1000000] = {0};

    int total_time_A = 0;
    for (int i = 0; i < N; i++) {
        if (A_dir[i] == 'R') {
            for (int t = 0; t < A_time[i]; t++) {
                A_pos[total_time_A + t + 1] = A_pos[total_time_A + t] + 1;
            }
        }
        else if (A_dir[i] == 'L') {
            for (int t = 0; t < A_time[i]; t++) {
                A_pos[total_time_A + t + 1] = A_pos[total_time_A + t] - 1;
            }
        }
        total_time_A += A_time[i];
    }
    int total_time_B = 0;
    for (int i = 0; i < M; i++) {
        if (B_dir[i] == 'R') {
            for (int t = 0; t < B_time[i]; t++) {
                B_pos[total_time_B + t + 1] = B_pos[total_time_B + t] + 1;
            }
        }
        else if (B_dir[i] == 'L') {
            for (int t = 0; t < B_time[i]; t++) {
                B_pos[total_time_B + t + 1] = B_pos[total_time_B + t] - 1;
            }
        }
        total_time_B += B_time[i];
    }
    for (int i = 1; i <= total_time_A; i++){
        if (A_pos[i] == B_pos[i]) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}