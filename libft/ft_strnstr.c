/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 14:31:38 by lusargsy          #+#    #+#             */
/*   Updated: 2021/02/03 16:45:19 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[j])
		return (char*)(haystack);
	while (haystack[i] && needle[j] && len)
	{
		if (haystack[i] == needle[j])
			j++;
		else if (j)
		{
			j = 0;
			continue;
		}
		i++;
		len--;
	}
	if (!needle[j])
		return (char*)(haystack + i - j);
	return (0);
}
