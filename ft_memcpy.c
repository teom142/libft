/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 23:11:32 by teom              #+#    #+#             */
/*   Updated: 2021/01/07 00:55:41 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	idx;

	idx = 0;
	if (!dest && !src)
		return (0);
	while (idx < num)
	{
		*((unsigned char*)dest + idx) = *((unsigned char*)src + idx);
		idx++;
	}
	return (dest);
}
