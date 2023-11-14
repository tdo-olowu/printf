#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *, ...);
int _putchar(char);
int _puts(const char *);
int _putdec(int);
int _putint(int, int);

char _putdigit(int);
char *_itoa(int, int);
int _abs(int);
int _ilog(int, int);

int _pow(int, unsigned int);

int (*get_writer(char))(void);


/**
 * struct format_map - maps a char to a funct to format input
 *
 * @ch: the character set e.g. c, s, d, i, o, x, %, etc.
 * @writer: the function invoked to write the input to stdout.
 * Description: associates a special character with a function
 */
typedef struct format_map
{
	char ch;
	int (*writer)(char);
} fmt_map;


#endif
