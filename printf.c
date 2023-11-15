#include "main.h"

/**
 * _printf - an attempt to do what printf does.
 * @fmt: format string specifier.
 * Return: number of bytes written.
 */
int _printf(const char *fmt, ...)
{
	int i, streak, bytes;
	va_list args;

	va_start(args, fmt);
	for (i = 0, bytes = 0, streak = 0 ; (fmt != NULL) && (fmt[i] != '\0') ; ++i)
	{
		if ((streak % 2 == 0) && (fmt[i] != '%'))
		{
			bytes += _putchar(fmt[i]);
			streak = 0; }
		else if ((streak % 2 == 0) && (fmt[i] == '%'))
			++streak;
		else if ((streak % 2 == 1) && (fmt[i] == '%'))
		{
			bytes += _putchar('%');
			++streak; }
		else	/* odd parity streak and fmt[i] != '%' */
		{
			switch (fmt[i])
			{
				case 'c':{
						bytes += _putchar(va_arg(args, int));
						break; }
				case 's':{
						bytes += _puts(va_arg(args, char*));
						break; }
				case 'd':{
						bytes += _putdec(va_arg(args, int));
						break; }
				case 'i':{
						bytes += _putint(va_arg(args, int), 10);
						break; }
				default:{
						bytes += _putchar('%');
						bytes += _putchar(fmt[i]);
						break; } }
			streak = 0; } }
	va_end(args);
	return (bytes); }
