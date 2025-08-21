/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samamaev <samamaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:35:12 by samamaev          #+#    #+#             */
/*   Updated: 2025/08/21 22:47:43 by samamaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int *count)
{
	int	i;
	int	ret;

	if (!s)
		s = "(null)";
	i = 0;
	while (s[i])
	{
		ret = write(fd, &s[i], 1);
		if (ft_handling(count, ret) == -1)
			return (-1);
		i++;
	}
	return (i);
}
