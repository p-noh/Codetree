#include <stdio.h>

int n, m, k;
int penalized_person[10000];

int main() {
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 0; i < m; i++) {
        scanf("%d", &penalized_person[i]);
    }
    
    // Please write your code here.
    int students[101] = {0};
    for (int i = 0; i < m; i++) {
        students[penalized_person[i]]++;
        for (int j = 0; j < n; j++) {
            if (students[j] >= k) {
                printf("%d\n", j);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}