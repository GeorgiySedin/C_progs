#include <stdio.h>
#include <stdbool.h>

void summaFact(unsigned int n) {

    int sum = 0;
    int proizv = 1;

    for(int i = 1; i < n; i++) {
        proizv *= i;
        sum += proizv;
        printf("%d\n", sum);
    }

    printf("%d", sum);
}

int main(void) {

    summaFact(10);

    return 0;
}