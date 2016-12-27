#include "Bool.h"

Bool
True(void)
{   return (Bool) {1};
}

Bool
False(void)
{   return (Bool) {0};
}

int
is_true(Bool x)
{   return (x._ == 1);
}

Bool
compare(Bool x1, Bool x2)
{   return (Bool) {(x1._ == x2._)};
}


module_Bool
import_Bool(void)
{   return (module_Bool) {
        .True = True,
        .False = False,
        .is_true = is_true,
        .compare = compare
    };
}