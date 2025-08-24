/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:29:39 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/24 20:18:48 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	int		ret;

	va_start(args, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (!*s)
				return (count);
			ret = ft_for_conversion(*s, args, &count);
			if (ret == -1)
				return (-1);
		}
		else
			ret = ft_putchar_fd(*s, 1, &count);
		if (ret == -1)
			return (-1);
		s++;
	}
	va_end(args);
	return (count);
}
