#include <stdio.h>

int solve(int x, int y) {
    if(x == y) return 4;
    if(x < y) return solve(y, x);
    return (x + y) * (x/y);
}

int main() {
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF) {
        printf("%d\n", solve(x, y));
    }
    return 0;
}
