// https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/stdarg.h.html

#ifndef _STDARG_H
#define _STDARG_H

typedef __builtin_va_list va_list;

#define va_start(v, l) __builtin_va_start(v, l)
#define va_end(v) __builtin_va_end(v)
#define va_arg(v, l) __builtin_va_arg(v, l)

#endif
