#include <stdio.h>
#include <stdbool.h>
#include "Bool.h"

typedef float Float;
Float
f1(Float x)
{   return x;
}

int
main(void)
{   module_Bool
    B = import_Bool();

    Float a = 1;
    printf("%f\n", f1(a));
    Bool x1 = B.True();
    Bool x2 = B.False();
    printf("%d\n", B.is_true(x1));
    printf("%d\n", B.is_true(x2));
    printf("x1 == x2: %d\n", B.is_true(B.compare(x1, x2)));
    printf("x1 == x1: %d\n", B.is_true(B.compare(x1, x1)));
    return 0;
}