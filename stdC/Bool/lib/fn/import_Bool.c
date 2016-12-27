module_Bool
import_Bool(void)
{   return (module_Bool) {
        .True = True,
        .False = False,
        .is_true = is_true,
        .compare = compare
    };
}
