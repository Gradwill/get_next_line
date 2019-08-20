/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:10:23 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/12 11:22:50 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*cons;
	size_t	i;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	else if (!(cons = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	len = 0;
	while (s1[i])
		cons[len++] = s1[i++];
	i = 0;
	while (s2[i])
		cons[len++] = s2[i++];
	cons[len] = '\0';
	return (cons);
}
