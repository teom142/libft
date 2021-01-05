/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 13:55:38 by teom              #+#    #+#             */
/*   Updated: 2020/12/28 14:13:41 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ret;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen((char*)s1);
	len_s2 = ft_strlen((char*)s2);
	ret = (char*)malloc(len_s1 + len_s2 + 1);
	if (!ret)
		return (0);
	ft_memcpy(ret, s1, len_s1);
	ft_memcpy(ret + len_s1, s2, len_s2);
	ret[len_s1 + len_s2] = 0;
	return (ret);
}
