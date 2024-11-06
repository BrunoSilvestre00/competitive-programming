#include <stdio.h>

int buffer[40] = {0};

int ways(int n) {
    return buffer[n-1] != 0 ? buffer[n-1] : (buffer[n-1] = n == 1 || n == 2 ? n : ways(n-1) + ways(n-2));
}

int main() {
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 0) break;
        printf("%d\n", ways(n));
    }
    return 0;
}