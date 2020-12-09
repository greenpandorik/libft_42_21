/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:43 by maragog           #+#    #+#             */
/*   Updated: 2020/05/25 23:37:48 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int b, size_t c)
{
	size_t	len;
	char	*str;

	str = (char *)a;
	len = 0;
	while (len < c)
	{
		str[len] = b;
		len++;
	}
	return (a);
}
