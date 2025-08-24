static int	putunbr_unsigned(unsigned int n, int fd, int *count)
{
	if (n >= 10)
	{
		if (putunbr_unsigned(n / 10, fd, count) == -1)
			return (-1);
	}
	if (ft_putchar_fd((n % 10) + '0', fd, count) == -1)
		return (-1);
	return (0);
}

int	ft_print_unsigned(va_list args)
{
	unsigned int	n;
	int				count;

	count = 0;
	n = va_arg(args, unsigned int);
	if (putunbr_unsigned(n, 1, &count) == -1)
		return (-1);
	return (count);
}
