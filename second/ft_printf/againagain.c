#include <stdarg.h>
#include <unistd.h>

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[len])
		len += write(1, &s[len], 1);
	return (len);
}

int	ft_putnbr_base(long n, int base)
{
	char	*s = "0123456789abcdef";
	char	buf[20];
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	while (n || i == 0)
	{
		buf[i] = s[n % base];
		n /= base;
		i++;
	}
	while (i--)
		len += write(1, &buf[i], 1);
	return (len);
}

int	ft_printf(const char	*input, ...)
{
	va_list	args;
	int	len;
	int	i;

	if (!input)
		return (-1);
	len = 0;
	i = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%' && input[i + 1])
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
	return(len);
}

#include <stdio.h>

int	main(void)
{
	ft_printf("ft_printf return value: %d\n", ft_printf("Hello %s, the number is %d, in hex %x\n", "SHINee", 42, 42));
	printf("printf return value: %d\n", printf("Hello %s, the number is %d, in hex %x\n", "SHINee", 42, 42));
	return (0);
}
