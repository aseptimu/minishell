/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseptimu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 19:45:23 by aseptimu          #+#    #+#             */
/*   Updated: 2021/10/12 17:01:46 by aseptimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = 0;
	while (*s++)
		i++;
	while (*--s != c)
	{
		if (i == 0)
			return ((void *)0);
		i--;
	}
	return ((char *)s);
}