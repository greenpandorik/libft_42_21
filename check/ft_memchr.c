/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 23:10:33 by maragog           #+#    #+#             */
/*   Updated: 2020/05/25 23:31:33 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int syb, size_t n)
{
	unsigned int len;

	len = 0;
	while (len < n)
	{
		if (((unsigned char*)str)[len] != (unsigned char)syb)
		{
			len++;
		}
		else
			return ((void *)&((unsigned char*)str)[len]);
	}
	return (0);
}
