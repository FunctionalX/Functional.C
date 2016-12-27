typedef
struct
{
    Bool (*True)(void);
    Bool (*False)(void);
    Bool (*compare)(Bool, Bool);
    int (*is_true)(Bool);
}
module_Bool;
