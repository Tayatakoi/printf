/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:21:30 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/22 17:14:31 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(long n, int fd, int *count)
{
	if (n < 0)
	{
		if (ft_putchar_fd('-', fd, count) == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		if (ft_putnbr_fd(n / 10, fd, count) == -1)
			return (-1);
	}
	if (ft_putchar_fd((n % 10) + '0', fd, count) == -1)
		return (-1);
	return (0);
}
// int main (void)
// {
// 	ft_putnbr_fd(123, 1);
// }