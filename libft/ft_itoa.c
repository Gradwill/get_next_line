/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:01:10 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/30 10:05:42 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		numlen(int n)
{
	int len;

	if (n < 0)
		len = 2;
	else
		len = 1;
	while ((n /= 10))
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	char*s;
	int len;
	int i;

	len = numlen(n);
	if ((s = (char *)malloc(len + 1)) == NULL)
		return (NULL);
	s[0] = '0';
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strcpy(s, "-2147483648"));
		s[0] = '-';
		n *= -1;
	}
	i = len - 1;
	while (n)
	{
		s[i--] = '0' + (n % 10);
		n /= 10;
	}
	s[len] = '\0';
	return (s);
}
