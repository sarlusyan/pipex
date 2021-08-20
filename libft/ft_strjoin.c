/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:25:56 by lusargsy          #+#    #+#             */
/*   Updated: 2021/02/12 18:32:03 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!(s1 && s2))
		return ("\0");
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	while (((char *)s1)[i])
	{
		ptr[i] = ((char *)s1)[i];
		i++;
	}
	while (((char *)s2)[j])
	{
		ptr[i] = ((char *)s2)[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
