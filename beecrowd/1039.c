#include <stdio.h>

int main() {
    int r1, x1, y1, r2, x2, y2;
    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
        double distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        printf(r1 >= distance + r2 ? "RICO\n" : "MORTO\n");
    }
    return 0;
}