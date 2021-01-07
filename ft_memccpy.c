/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 23:15:51 by teom              #+#    #+#             */
/*   Updated: 2021/01/07 00:58:49 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	idx;
	int		flag_c;

	idx = 0;
	flag_c = 0;
	while (idx < n && *((unsigned char*)src + idx) && !flag_c)
	{
		if (*((unsigned char*)src + idx) == (unsigned char)c)
			flag_c = 1;
		idx++;
	}
	if (flag_c)
	{
		ft_memcpy(dest, src, idx);
		return (dest + idx);
	}
	else
	{
		ft_memcpy(dest, src, n);
		return (0);
	}
}
