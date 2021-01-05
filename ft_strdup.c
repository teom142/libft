/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 19:56:25 by teom              #+#    #+#             */
/*   Updated: 2020/12/27 20:23:56 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*ptr;
	char	*s;
	int		s_len;

	s = (char*)str;
	s_len = ft_strlen(s) + 1;
	ptr = (char*)malloc(s_len);
	if (ptr)
		ft_strlcpy(ptr, s, s_len);
	return (ptr);
}
