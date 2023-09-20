#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - printer functions  structure
 * @type_arg: printer function identifier
 * @f: printer function pointer
 *
 * Description: This particular structure handles pointers to different
 * printer functions for handling different data types.
 */


int _printf(const char *format, ...);
int _putchar(char c);
int handle_di(va_list args);
int handle_di_recursive(int num);
int print_char(va_list args);
int print_string(va_list args);

#define BUFF_SIZE 1024


#endif /* _MAIN_H_ */

