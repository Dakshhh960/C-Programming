#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Minimum = %d\n", a < b ? a : b);
    return 0;
}
