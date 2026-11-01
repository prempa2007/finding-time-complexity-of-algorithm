#include <stdio.h>

int count = 0;

void func(int n) {
    if (n == 1) {
        count++;
        // printf("*");
        count++;
    } else {
        count++;
        for (int i = 1; i <= n; i++) {
            count++;
            for (int j = 1; j <= n; j++) {
                count++;
                // printf("*");
                count++;
                // printf("*");
                count++;
                break;
            }
            count++;
        }
        count++;
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    func(n);
    printf("%d\n", count);
    return 0;
}
