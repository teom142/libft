/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:54:04 by teom              #+#    #+#             */
/*   Updated: 2020/12/24 22:43:31 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		index;
	const char	*ptr;
	const char	*need_start;

	if (*needle == '\0' || (index = 0))
		return ((char*)haystack);
	ptr = 0;
	while (*haystack && index + 1 < len && *needle)
	{
		if (*haystack == *needle)
		{
			ptr = haystack;
			need_start = needle;
			while (*needle && ++index < len)
			{
				if (*(haystack++) != *(needle++))
					ptr = 0;
			}
			if (*needle)
				needle = need_start;
		}
		index++;
		haystack++;
	}
	return (index >= len ? (0) : ((char*)ptr));
}
