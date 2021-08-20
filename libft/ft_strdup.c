/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 16:06:05 by lusargsy          #+#    #+#             */
/*   Updated: 2021/02/05 15:55:48 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	size;

	size = ft_strlen(s1);
	if (!(ptr = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memcpy(ptr, s1, size);
	*(ptr + size) = '\0';
	return (ptr);
}
