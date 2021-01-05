/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 13:26:44 by teom              #+#    #+#             */
/*   Updated: 2020/12/28 14:47:57 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;
	size_t	str_len;

	ret = (char*)malloc(len + 1);
	if (!ret || !str)
		return (0);
	str_len = ft_strlen((char*)str);
	i = 0;
	while (i < len && start + i < str_len)
	{
		ret[i] = str[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
