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


int _printf(const char *format, ...);
int _putchar(char c);
int handle_di(va_list args);
int print_char(va_list args);
int print_string(va_list args);

#define BUFF_SIZE 1024


#endif /* _MAIN_H_ */

