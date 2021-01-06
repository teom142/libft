/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 17:09:52 by teom              #+#    #+#             */
/*   Updated: 2021/01/06 17:05:37 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	index;
	size_t	dest_len;
	size_t	src_len;

	index = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (*dest)
	{
		dest++;
		index++;
	}
	while (*src && index + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		index++;
	}
	if (dest_len <= size)
		*dest = 0;
	if (dest_len > size)
		return (src_len + size);
	else
		return (src_len + dest_len);
}
