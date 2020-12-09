/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:43 by maragog           #+#    #+#             */
/*   Updated: 2020/05/25 23:57:36 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int syb)
{
	while (*str)
	{
		if (*str == syb)
			return ((char*)str);
		++str;
	}
	if (syb == '\0')
		return ((char*)str);
	return (0);
}
