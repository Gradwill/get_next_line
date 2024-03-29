/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:16:14 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/29 12:37:09 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*maps;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	else if ((maps = ft_strnew(ft_strlen(s))) == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		maps[i] = f(i, s[i]);
		i++;
	}
	return (maps);
}
