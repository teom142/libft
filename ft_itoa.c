/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 23:37:49 by teom              #+#    #+#             */
/*   Updated: 2021/01/07 01:03:25 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static long int	ft_abs(long int num)
{
	return ((num < 0) ? -num : num);
}

static int		count_digit(int num)
{
	int		len;

	len = (num <= 0) ? 1 : 0;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char			*ft_itoa(int num)
{
	char	*ret;
	int		num_len;
	int		min_flag;

	min_flag = num < 0;
	num_len = count_digit(num);
	if (!(ret = (char*)malloc(num_len + 1)))
		return (0);
	ret[num_len--] = 0;
	while (num_len >= 0)
	{
		ret[num_len] = ft_abs(num % 10) + '0';
		num_len--;
		num = ft_abs(num / 10);
	}
	if (min_flag)
		ret[0] = '-';
	return (ret);
}
