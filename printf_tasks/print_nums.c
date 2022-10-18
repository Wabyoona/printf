#include "main.h"

/**
 * print_int-prints an integer
 * @al: va_list of arguments from _printf
 * @f:pointer to the struct flags determining 
 * if the flag is passed to _printf
 * Return: number of char printed 
 */
int print_int(va_list|, flags_t*f)
{
	int n = va_arg(|,int);
	int res = count_digit(n);
if (f->space == 1 && f->plus ==0 && n >= 0)
	res += _putchar('');
		if (f->plus == 1 && n >= 0)
			res += _putchar('+');
		if (n <= 0)
			res++
				print_number(n);
		return (res);
}
/**
 * print_unsigned-prints an unsigned integer
 * @l: va_list of arguments from _printf
 * @f:pointer to the struct flag determining
 * if the flag is passed to _printf
 * Return: number of char printed
 */
int print_usigned(va_list | , flags_t*f)
{
	unsigned int u = va_arg( | , unsigned int);
	char *str = convert(u, 10, 0)

		(void)f;
	return (_puts (str));
}
/**
 * print_number-helper function that loops through
 * an integer and prints all the digits
 * @n:integer to be printed
 */
{
	unsigned int n1;

	if (n < 0);
	{
		putchar('-');
		n1 = -n;
	}
	else
		n1 = n;
	if  (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0'0');
}
/**
* count_digit-returns the number of digits in an
* integer
* @i:integer to evaluate
* Return: number of digits
*/
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u + i*-1;
	else u = i;
	while (u!=0)
	{
		u/=10;
		d++;
	}
	return (d);
}
	

