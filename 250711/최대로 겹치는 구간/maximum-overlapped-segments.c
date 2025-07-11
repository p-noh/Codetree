#include <stdio.h>

int n;
int x1[100];
int x2[100];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x1[i], &x2[i]);
    }

    // 최소 좌표 찾기
    int min = x1[0];
    for (int i = 1; i < n; i++) {
        if (min > x1[i])
            min = x1[i];
    }

    int offset = (min < 0) ? -min : 0;
    int arr[401] = {0}; // 충분한 범위 확보

    // 구간별 겹치는 개수 세기
    for (int i = 0; i < n; i++) {
        int from = x1[i] + offset;
        int to = x2[i] + offset;

        while (from < to) {
            arr[from++] += 1;
        }
    }

    // 최대 겹치는 지점 구하기
    int max = 0;
    for (int i = 0; i < 401; i++) {
        if (max < arr[i])
            max = arr[i];
    }

    printf("%d\n", max);
    return 0;
}
