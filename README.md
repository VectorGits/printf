## printf("Hello World")
The printf project is a collaboration between **Vector** and **Darndy**, actual students of Software Engineering at "ALX" where a function named "_printf()" mirrors the actual "printf" command which is located in the stdio.h library(standard input and output). It contains some of the basic features and functions found in the main "printf".

_printf() is a function that performs formatted output conversion and print data. here is the prototype below

	int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

The format tags prototype is the following:

	%[flags][length]specifier
