/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 14:37:57 by lusargsy          #+#    #+#             */
/*   Updated: 2021/02/05 15:39:53 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	index;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	index = 0;
	while (index < len)
	{
		substr[index] = *(s + start + index);
		index++;
	}
	substr[index] = '\0';
	return (substr);
}
