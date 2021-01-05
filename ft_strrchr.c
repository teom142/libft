/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teom <teom@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 16:44:08 by teom              #+#    #+#             */
/*   Updated: 2020/12/22 16:53:08 by teom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, char c)
{
	char	*start;

	start = str;
	while (*str)
		str++;
	while (start != str && c != *str)
		str--;
	if (c == *str)
		return (str);
	return (0);
}
