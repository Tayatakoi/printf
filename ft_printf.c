/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:29:39 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/18 22:00:59 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *s, ...)
{
    va_list args;
    int count;
    int i;

    va_start(args, s);
    count = 0;
    i = 0;
    while(*s)
    {
        if(*s == '%')
        {
            s++;
            if(*s == 'd')
            {
                int n = va_arg(args, int);
                count += ft_putnbr_fd(n, 1);
            }
            else
            {
                write(1, s, 1);
                count++;
                s++;
            }
        }
        else
        {
            write(1, s, 1);
            count++;
            s++;
        }
    }
    va_end(args);
    return (count);
}
