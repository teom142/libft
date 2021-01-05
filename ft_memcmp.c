/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 00:26:36 by teom              #+#    #+#             */
/*   Updated: 2020/12/30 21:23:41 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *src1, const void *src2, size_t num)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char*)src1;
	ptr2 = (unsigned char*)src2;
	while (num--)
	{
		if (*ptr1 > *ptr2)
			return (1);
		if (*ptr1 < *ptr2)
			return (-1);
		ptr1++;
		ptr2++;
	}
	return (0);
}
