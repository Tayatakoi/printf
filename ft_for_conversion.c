/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:58:16 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/23 17:25:54 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_for_conversion(char c, va_list args, int *count)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int), 1, count));
	if (c == 's')
		return (ft_putstr_fd(va_arg(args, char *), 1, count));
	if (c == 'd' || c == 'i')
		return (ft_print_int(args, count));
	if (c == 'p')
		return (ft_print_pointer(va_arg(args, void *), count));
	else if (c == 'u')
		return (ft_print_unsigned(args));
	return (0);
}
