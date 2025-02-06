#include <stdio.h>
#include <math.h>

int main() {
    double a = 1;
    float add = powf(2, -24);

    for (int i = 0; i < 100000000; ++i) {
        a += add;
    }

    a = (float)a;

    printf("%.30f", a);

}