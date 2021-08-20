/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:56:50 by lusargsy          #+#    #+#             */
/*   Updated: 2021/02/12 18:31:35 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if ((char *)s)
	{
		while (*((unsigned char *)s))
		{
			if ((char)c == *((char *)s))
				return ((char *)s);
			s++;
		}
		if ((char)c == 0)
			return ((char *)s);
	}
	return (NULL);
}
