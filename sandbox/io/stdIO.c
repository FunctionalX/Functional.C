#include <stdarg.h>
#include <stdio.h>

void
aux_printf(const char *format_str, ...)
{   va_list args;
    va_start(args, format_str);;
    vprintf(format_str, args);
    va_end(args);  
}