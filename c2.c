#include <stdio.h>

union Number {
    int i;
    float f;
};

int main()
{
    union Number values[3];

    values[0].i = 10;
    values[1].i = 20;
    values[2].i = 30;

    printf("Integers: %d %d %d\n", values[0].i, values[1].i, values[2].i);

    values[1].f = 7.5f;
    printf("After overwrite, second value as float = %.2f\n", values[1].f);
    return 0;
}
