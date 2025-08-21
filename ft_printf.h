/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 21:32:49 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/21 22:46:46 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putnbr_fd(int n, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_for_conversion(char c, va_list args);
int		ft_print_int(va_list args);
char	ft_print_char(va_list args);
int		ft_print_str(va_list args);
int		ft_printf(const char *s, ...);
int		ft_putstr_fd(char *s, int fd, int *count);
int		ft_handling(int *count, int s);

#endif