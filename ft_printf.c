/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:29:39 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/20 22:21:16 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *s, ...)
{
    va_list args;
    int count;

    va_start(args, s);
    count = 0;
    while(*s)
    {
        if(*s == '%')
        {
            s++;
            if(*s == '\0')
                return(count);
            count += ft_for_conversion(*s, args);
        }
        else
        {
            ft_putchar_fd(s, 1);
            count++;
        }
    s++;
    }
    va_end(args);
    return (count);
}
