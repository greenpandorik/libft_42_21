/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 22:11:07 by maragog           #+#    #+#             */
/*   Updated: 2020/05/24 22:12:54 by maragog          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mapped;

	if (s == NULL)
		return (NULL);
	if (!(mapped = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(mapped + i) = (*f)(i, *(s + i));
		i++;
	}
	*(mapped + i) = '\0';
	return (mapped);
}
