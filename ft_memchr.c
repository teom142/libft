/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 23:55:20 by teom              #+#    #+#             */
/*   Updated: 2020/12/25 00:40:40 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t num)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)src;
	while (num--)
	{
		if (*ptr != ((unsigned char)c))
			ptr++;
		else
			return (ptr);
	}
	return (0);
}
