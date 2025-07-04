/*
Assignment name  : ft_printf
Expected files   : ft_printf.c
Allowed functions: malloc, free, write, va_start, va_arg, va_copy, va_end
--------------------------------------------------------------------------------

Write a function named `ft_printf` that will mimic the real printf with the following constraints:

- It will manage only the following conversions: s,d, and x

Your function must be declared as follows:

int ft_printf(const char *, ... );

Before you start we advise you to read the `man 3 printf` and the `man va_arg`.
To test your program compare your results with the true printf.

Your function must not leak.


Exemples of the function output:

call: ft_printf("Hello %s\n", "toto");
out:Hello toto$

call: ft_printf("Magic %s is %d", "number", 42);
out:Magic number is 42%

call: ft_printf("Hexadecimal for %d is %x\n", 42, 42);
out:Hexadecimal for 42 is 2a$

Warning: Your function must not have any leaks, this will be checked during moulinette */

#include <unistd.h>
#include <stdarg.h>

int	ft_putstr(char *s)
{
	int	len;

	if (!s)
		return (write(1, "(null)", 6));
	len = 0;
	while (s[len])
		len++;
	return (write(1, s, len));
}

int	ft_putnbr_base(long n, int base)
{
	char	*s = "0123456789abcdef";
	char	buf[20];
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}

	while (n || i == 0)
	{
		buf[i] = s[n % base];
		i++;
		n /= base;
	}

	while (i--)
		len += write(1, &buf[i], 1);
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list args;
	int	len;
	int	i;

	if (!input)
		return (-1);
	va_start(args, input);
	len = 0;
	i = 0;
	while (input[i])
	{
		if (input[i] == '%' && input[i+1])
		{
			i++;
			if (input[i] == 'd')
				len += ft_putnbr_base(va_arg(args, int), 10);
			else if (input[i] == 'x')
				len += ft_putnbr_base(va_arg(args, unsigned int), 16);
			else if (input[i] == 's')
				len += ft_putstr(va_arg(args, char *));
		}
		else
			len += write(1, &input[i], 1);
		i++;
		
	}
	va_end(args);
	return (len);
}

/* Test */

#include <stdio.h>

int	main(void)
{
	ft_printf("ft_printf's return value: %d\n", ft_printf("Hello %s! The number is %d and in hex: %x\n", "SHINee", 42, 42));
	printf("printf's return value: %d\n", printf("Hello %s! The number is %d and in hex: %x\n", "SHINee", 42, 42));
	return (0);
}
