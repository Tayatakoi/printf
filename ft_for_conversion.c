/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:58:16 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/20 22:42:20 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char ft_for_conversion(char c, va_list args)
{
    if(c == 'd' || c == 'i')
        return (ft_print_int(args));
}