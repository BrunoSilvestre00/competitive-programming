// [PASSED][PROBLEM] - https://judge.beecrowd.com/pt/problems/view/1630

#include <stdio.h>

long long int feynman(int n) {
    return n != 1 ? n*n + feynman(n-1) : 1;
}

int main() {
    int n;
    while(1) {
        scanf("%d", &n);
        if(!n) break;
        printf("%lld\n", feynman(n));
    }
    return 0;
}