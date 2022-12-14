/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moveptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srobt <srobt@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:09:06 by srobt             #+#    #+#             */
/*   Updated: 2022/03/26 18:45:00 by srobt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_moveptr(char **ptr, int n)
{
	int	i;

	i = 0;
	while ((**ptr) && i < n)
	{
		(*ptr)++;
		i++;
	}
	return (i);
}
