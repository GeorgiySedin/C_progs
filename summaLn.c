#include <stdio.h>
#include <math.h>

void summaLn(unsigned int n, float x) {

    if(fabs(x) >= 1) {
        return;
    }

    float ln = 0;

    for(int i = 1; i < n; i++) {
        ln += pow(-1, i + 1) * pow(x, i) / i;
        printf("%.3f\n", ln);
    }

    printf("End result: %.6f", ln);
}

int main(void) {

    summaLn(10, 0.55);

    return 0;
}