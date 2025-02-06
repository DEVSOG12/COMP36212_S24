#include <stdio.h>
#include <math.h>

int main() {
    float a = 1;
    float add = powf(2, -24); // using powf instead of pow as powf is arg (float, float)

    for (int i=0; i < 100000000; i++) {
        a += add;
    }

    printf("%.30f", a);
}
