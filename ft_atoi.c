/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 19:00:19 by teom              #+#    #+#             */
/*   Updated: 2021/01/06 16:30:41 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char c)
{
	if (c == ' ' ||
			c == '\t' ||
			c == '\n' ||
			c == '\v' ||
			c == '\f' ||
			c == '\r')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	long	minus_num;
	long	ret;

	ret = 0;
	minus_num = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			minus_num = -1;
	while (ft_isdigit(*str))
	{
		ret *= 10;
		ret += *str - '0';
		if (ret > 2147483647 && minus_num == 1)
			return (-1);
		if (ret > 2147483648 && minus_num == -1)
			return (0);
		str++;
	}
	return (ret * minus_num);
}
