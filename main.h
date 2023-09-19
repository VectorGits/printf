#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - Structure for printer functions
 * @type_arg: Identifier for the printer function
 * @f: Pointer to a printer function
 *
 * Description: This structure holds pointers to various
 * printer functions for handling different data types.
 */

typedef struct print
{
    char *type_arg;
    int (*f)(va_list, char *, unsigned int *);
} print_t;

int _printf(const char *format, ...);
int handle_di(va_list args);
int _putchar(char c);
int print_char(va_list args)

int print_buf(char *buf, unsigned int nbuf);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int ev_print_func(const char *s, int index);

#endif /* _MAIN_H_ */

