int	ft_print_X_x(va_list args, int lowercase)
{
	unsigned int	n;
	int				count;

	count = 0;
	n = va_arg(args, unsigned int);
	if (ft_puthex_fd((unsigned long)n, 1, lowercase, &count) == -1)
		return (-1);
	return (count);
}
