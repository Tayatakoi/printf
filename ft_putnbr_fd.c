/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 18:21:30 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/21 20:14:57 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	long	da;
	int		count;

	count = 0;
	da = n;
	if (da < 0)
	{
		ft_putchar_fd('-', fd);
		count++;
		da *= -1;
	}
	if (da >= 0 && da <= 9)
	{
		ft_putchar_fd(da + '0', fd);
		count++;
	}
	if (da > 9)
	{
		count += ft_putnbr_fd(da / 10, fd);
		count += ft_putnbr_fd(da % 10, fd);
	}
	return (count);
}
// int main (void)
// {
// 	ft_putnbr_fd(123, 1);
// }