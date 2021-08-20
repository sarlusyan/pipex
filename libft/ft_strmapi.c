/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 18:27:12 by lusargsy          #+#    #+#             */
/*   Updated: 2021/02/03 18:33:05 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buff;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (!(buff = malloc(size + 1)))
		return (0);
	ft_strlcpy(buff, s, size + 1);
	while (i < size)
	{
		buff[i] = (*f)(i, buff[i]);
		i++;
	}
	return (buff);
}
