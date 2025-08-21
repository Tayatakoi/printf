/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:58:16 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/21 19:55:52 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_for_conversion(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (ft_print_int(args));
	else if (c == 'c')
		return (ft_print_char(args));
	else if (c == 's')
		return (ft_print_str(args));
	else
		return (-1);
}
