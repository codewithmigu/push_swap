/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/25 03:06:22 by nmuresan          #+#    #+#             */
/*   Updated: 2015/11/13 21:47:29 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	if (!(tmp = (unsigned char*)malloc(sizeof(*tmp) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		*(tmp + i) = *(unsigned char*)(src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(unsigned char*)(dst + i) = *(tmp + i);
		i++;
	}
	free(tmp);
	return (dst);
}
