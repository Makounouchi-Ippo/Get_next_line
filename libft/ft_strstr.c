/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehel-ka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:00:51 by mehel-ka          #+#    #+#             */
/*   Updated: 2017/11/19 21:01:51 by mehel-ka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (s2[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while (s2[j] == s1[i + j])
		{
			if (j == len - 1)
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (0);
}
