/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 17:16:39 by lusargsy          #+#    #+#             */
/*   Updated: 2021/01/31 15:44:23 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int size;

	size = ft_strlen(s);
	while (size >= 0)
	{
		if (s[size] == c)
			return (&((char *)s)[size]);
		--size;
	}
	return (NULL);
}
