#include <stdio.h>

int n, cache[100001];
char done[100001] = {1, 1, 1};

int run(int value) {
    if (!done[value]) {
        cache[value] = run(value - 1) + run(value - 2) - run(value - 3);
        done[value] = 1;
    }
    return cache[value];
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d%d%d%d", cache, cache + 1, cache + 2, &n);
    printf("%d\n", run(n));
    return 0;
}
