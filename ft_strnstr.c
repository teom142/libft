/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:54:04 by teom              #+#    #+#             */
/*   Updated: 2021/01/06 16:24:26 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		size;
	size_t		len_h;
	size_t		len_n;

	if (!*needle)
		return ((char *)haystack);
	len_h = ft_strlen((char*)haystack);
	len_n = ft_strlen((char*)needle);
	if (len_h < len_n || len < len_n)
		return (0);
	size = len_h > len ? len : len_h;
	while (size-- >= len_n)
	{
		if (!ft_memcmp(haystack, needle, len_n))
			return ((char*)haystack);
		haystack++;
	}
	return (0);
}
