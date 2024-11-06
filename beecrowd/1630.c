#include <stdio.h>

int mdc(int a, int b) {
    return b == 0 ? a : mdc(b, a % b);
}

int main() {
    int x, y, m, qtd;
    while(scanf("%d %d", &x, &y) != EOF) {
        m = mdc(x, y);
        qtd = 2*(x/m + y/m);
        printf("%d\n", qtd);
    }
    return 0;
}
