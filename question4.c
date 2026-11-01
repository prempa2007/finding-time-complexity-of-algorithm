#include <stdio.h>

int count = 0;

void function(int n) {
    int c = 0;
    count++;
    for (int i = n / 2; i < n; i++) {
        count++;
        for (int j = 1; j < n; j = 2 * j) {
            count++;
            for (int k = 1; k < n; k = k * 2) {
                count++;
                c++;
                count++;
            }
            count++;
        }
        count++;
    }
    count++;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 1;
    }
    function(n);
    printf("%d\n", count);
    return 0;
}
