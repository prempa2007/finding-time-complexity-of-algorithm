#include <stdio.h>

int count = 0;

void function(int n) {
    int i = 1;
    count++;
    int s = 1;
    count++;
    while (s <= n) {
        count++;
        i++;
        count++;
        s += i;
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
