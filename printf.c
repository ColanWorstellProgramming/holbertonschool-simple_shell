#include "shell.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stddef.h>

/**
 * _printf - | Prototype for main function
 * @format: var
 * Return: functions return
 */
int _printf(const char *format, ...)
{
unsigned int i, count = 0;
va_list list;
int (*x)(va_list);
if (format == NULL)
{
return (-1);
}
va_start(list, format);
i = 0;
while (format[i])
{
for (i = i; format[i] != '%' && format[i]; i++)
{
_putchar(format[i]);
count++;
}
if (!format[i])
return (count);
x = get_print_func(&format[i + 1]);
if (x != NULL)
{
count += x(list);
i += 2;
continue;
}
if (!format[i + 1])
return (-1);
_putchar(format[i]);
count++;
if (format[i + 1] == '%')
i += 2;
else
i++;
}
va_end(list);
return (count);
}
/**
 * get_print_func - | format to a var
 * @format: var
 * Return: var
 */
int (*get_print_func(const char *format))(va_list)
{
unsigned int i;
form print_class[] = {
{"c", print_c},
{"s", print_s},
{"d", print_di},
{"i", print_di},
{NULL, NULL}
};
for (i = 0; print_class[i].theC != NULL; i++)
{
if (*(print_class[i].theC) == *format)
{
break;
}
}
return (print_class[i].z);
}
/**
 * print_c - | printc
 * @c: var
 * Return: c
 */
int print_c(va_list c)
{
unsigned int count = 0;
if (!c)
{
return (0);
}
_putchar((char)va_arg(c, int));
count++;
return (count);
}
/**
 * print_s - | prints
 * @s: var
 * Return: s
 */
int print_s(va_list s)
{
unsigned int length;
char *str = va_arg(s, char *);
if (str == NULL)
{
str = "(null)";
}
for (length = 0; str[length]; length++)
{
_putchar(str[length]);
}
return (length);
}
/**
 * print_di - | print di
 * @di: var
 * Return: var
 */
int print_di(va_list di)
{
unsigned int count = 0, i = 0;
int val = va_arg(di, int), divider = 1;
char intmin[11] = {"-2147483648"};
if (val == INT_MIN)
{
for (i = 0; i <= 10; i++)
{
_putchar(intmin[i]);
count++;
}
return (count);
}
if (val < 0)
{
_putchar('-');
val = -val;
count++;
}
while ((val / divider) >= 10)
{
divider *= 10;
}
while (divider >= 1)
{
_putchar((val / divider) +'0');
val %= divider;
divider /= 10;
count++;
}
return (count);
}
