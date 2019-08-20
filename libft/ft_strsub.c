/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:39:46 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/19 16:57:27 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;

	if (((ss = (char *)malloc(sizeof(char) * (len - start) + 1))) && s != NULL)
	{
		i = 0;
		while (s[start] && start < len)
		{
			ss[i] = s[start];
			start++;
			i++;
		}
		ss[len] = '\0';
		return (ss);
	}
	else
		return (NULL);
}
