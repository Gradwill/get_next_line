/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:02:40 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/28 08:42:31 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*desp;
	unsigned char	*srcp;
	size_t			i;
	unsigned char	uc;

	uc = (unsigned char)c;
	desp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		desp[i] = srcp[i];
		if (srcp[i] == uc)
			break ;
		i++;
	}
	if (srcp[i] == uc)
		return (dest + ++i);
	else
		return (NULL);
}
