#include <stdio.h>
#include <stdbool.h>

void fibNumbers(unsigned int n) {

    int fib1 = 0;
    int fib2 = 1;

    printf("%d\n", fib1);
    printf("%d\n", fib2);

    for (int i = 2; i < n; i++) {
        int new_fib = fib1 + fib2;
        printf("%d\n", new_fib);

        fib1 = fib2;
        fib2 = new_fib;
    }
}

int main(void) {

    fibNumbers(10);

    return 0;
}