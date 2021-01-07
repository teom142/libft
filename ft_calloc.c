/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 19:31:37 by teom              #+#    #+#             */
/*   Updated: 2021/01/07 01:02:54 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elt_count, size_t elt_size)
{
	void	*ret;

	if (!(ret = malloc(elt_count * elt_size)))
		return (0);
	ft_bzero(ret, elt_count * elt_size);
	return (ret);
}
