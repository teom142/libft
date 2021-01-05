/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:18:30 by teom              #+#    #+#             */
/*   Updated: 2020/12/28 14:43:00 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *charset)
{
	size_t	start;
	size_t	end;
	char	*ret;

	if (!str)
		return (NULL);
	if (!charset)
		return (ft_strdup((char*)str));
	start = 0;
	end = ft_strlen((char*)str);
	while (str[start] && ft_strchr((char*)charset, (char)str[start]))
		start++;
	while (str[end - 1] && ft_strchr((char*)charset, (char)str[end - 1]))
	{
		if (end - 1 < 1)
			break ;
		end--;
	}
	if (start > end)
		return (ft_strdup(""));
	ret = (char*)malloc(end - start + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, (char*)str + start, end - start + 1);
	return (ret);
}
