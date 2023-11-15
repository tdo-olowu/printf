#include "main.h"

/**
 * _printf - an attempt to do what printf does.
 * @fmt: format string specifier.
 * Return: number of bytes written.
 */
int _printf(const char *fmt, ...)
{
	int i, streak, bytes, n, ch;
	char *str;
	va_list args;

	bytes = 0;
	va_start(args, fmt);
	for (i = 0, streak = 0 ; (fmt != NULL) && (fmt[i] != '\0') ; ++i)
	{
		if ((streak % 2 == 0) && (fmt[i] != '%'))
		{
			bytes += _putchar(fmt[i]);
			streak = 0;
		}
		else if ((streak % 2 == 0) && (fmt[i] == '%'))
		{
			++streak;
		}
		else if ((streak % 2 == 1) && (fmt[i] == '%'))
		{
			bytes += _putchar('%');
			++streak;
		}
		else	/* odd parity streak and fmt[i] != '%' */
		{
			switch (fmt[i])
			{
				case 'c':
					{
						ch = va_arg(args, int);
						bytes += _putchar(ch);
						break;
					}
				case 's':
					{
						str = va_arg(args, char*);
						bytes += _puts(str);
						break;
					}
				case 'd':
					{
						n = va_arg(args, int);
						bytes += _putdec(n);
						break;
					}
				case 'i':
					{
						n = va_arg(args, int);
						bytes += _putint(n, 10);;
						break;
					}
				default:
					{
						bytes += _putchar('%');
						bytes += _putchar(fmt[i]);
						break;
					}
			}
			streak = 0;
		}
	}
	va_end(args);

	return (bytes);
}
