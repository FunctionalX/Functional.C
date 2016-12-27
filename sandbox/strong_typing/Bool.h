#pragma once

typedef
struct
{
    unsigned int _: 1;
}
Bool;

typedef
struct
{
    Bool (*True)(void);
    Bool (*False)(void);
    Bool (*compare)(Bool, Bool);
    int (*is_true)(Bool);
}
module_Bool;

module_Bool
import_Bool(void);

