/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 19:00:19 by teom              #+#    #+#             */
/*   Updated: 2020/12/27 19:25:32 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		minus_num;
	int		ret;

	ret = 0;
	minus_num = 1;
	while (*str == '\t' ||
			*str == '\n' ||
			*str == '\v' ||
			*str == '\f' ||
			*str == '\r' ||
			*str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			minus_num = -1;
	while (ft_isdigit(*str))
	{
		ret *= 10;
		ret += *str - '0';
		str++;
	}
	return (ret * minus_num);
}
