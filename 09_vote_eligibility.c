#include <stdio.h>
int main(void) {
    int age;
    scanf("%d", &age);
    if (age >= 18) printf("Eligible for voting.\n");
    else printf("Not eligible for voting.\n");
    return 0;
}
