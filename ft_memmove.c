/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 23:33:57 by teom              #+#    #+#             */
/*   Updated: 2020/12/25 00:31:50 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*src_cl;
	unsigned char	*dst_cl;

	if (dest == src || !num)
		return (dest);
	src_cl = (unsigned char*)src;
	dst_cl = (unsigned char*)dest;
	if (dest < src)
	{
		while (num--)
			*(dst_cl++) = *(src_cl++);
	}
	else
	{
		while (num--)
			*(dst_cl + num) = *(src_cl + num);
	}
	return (dest);
}
