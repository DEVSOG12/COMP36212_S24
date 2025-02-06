#include <stdio.h>
#include <math.h>

int main() {
    float a = 1.0f;

    float add = powf(2, -24); // using powf instead of pow as powf is arg (float, float)

    float c = 0.0f;

    for (int i=0; i < 100000000; i++) {
        float y = add - c;
        float t = a + y;
        c = (t - a) - y;
        a = t;

    }

    printf("%.30f", a);
}
