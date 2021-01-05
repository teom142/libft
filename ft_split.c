/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:48:44 by teom              #+#    #+#             */
/*   Updated: 2020/12/28 15:58:51 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	word_num(char const *str, char c)
{
	long long	num;

	num = 0;
	while (*str)
	{
		if (*str != c)
		{
			num++;
			while (*str && *str != c)
				str++;
		}
		if (*str)
			str++;
	}
	return (num);
}

char		**ft_split(char const *str, char c)
{
	char		**ret;
	long long	i;
	char		*start;

	if (!str)
		return (0);
	if (!(ret = (char**)malloc(sizeof(char*) * word_num(str, c) + 1)))
		return (0);
	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			start = (char*)str;
			while (*str && *str != c)
				str++;
			if (!(ret[i] = (char*)malloc(str - start + 1)))
				return (0);
			ft_strlcpy(ret[i++], start, str - start + 1);
		}
		if (*str)
			str++;
	}
	ret[i] = 0;
	return (ret);
}
