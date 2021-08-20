/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:20:47 by lusargsy          #+#    #+#             */
/*   Updated: 2021/01/26 12:55:51 by lusargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int i;

	i = 0;
	while (len > 0)
	{
		((unsigned char *)b)[i] = ((unsigned char)c);
		i++;
		len--;
	}
	return (b);
}
