/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:57:36 by mehel-ka          #+#    #+#             */
/*   Updated: 2017/11/23 16:36:47 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dest1;
	const unsigned char		*src1;

	i = 0;
	dest1 = dst;
	src1 = src;
	if (dst <= src)
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (n > 0)
		{
			n--;
			dest1[n] = src1[n];
		}
	}
	return (dst);
}
