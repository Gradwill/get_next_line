/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:50:18 by gngobeni          #+#    #+#             */
/*   Updated: 2019/07/04 09:09:28 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list	*get_element(size_t i)
{
	static t_list		*list;
	size_t				count;
	t_list				**temp_ls;

	count = 0;
	if (!list)
		if (!(list = ft_lstnew(NULL, count++)))
			return (NULL);
	temp_ls = &list;
	while (i > 0)
	{
		temp_ls = &((*temp_ls)->next);
		if (!*temp_ls)
			if (!(*temp_ls = ft_lstnew(NULL, count++)))
				return (NULL);
		i--;
	}
	return (*temp_ls);
}

static int		get_line(char **line, char **s, int bytes)
{
	size_t	i;
	char	*temp;

	if (bytes < 0)
		return (-1);
	else if (bytes == 0 && (*s == NULL || (*s)[0] == '\0'))
		return (0);
	i = 0;
	while ((*s)[i] != '\n' && (*s)[i] != '\0')
		i++;
	if ((*s)[i] == '\n')
	{
		*line = ft_strsub(*s, 0, i);
		temp = ft_strdup(*s + i + 1);
		ft_strdel(s);
		*s = ft_strdup(temp);
		ft_strdel(&temp);
	}
	else if ((*s)[i] == '\0')
	{
		*line = *s;
		*s = NULL;
	}
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	t_list	*str_ls;
	char	**s;
	char	buf[BUFF_SIZE + 1];
	int		bytes;
	char	*temp;

	if (fd < 0 || line == NULL)
		return (-1);
	str_ls = get_element(fd);
	s = (char **)&str_ls->content;
	if (*s == NULL)
			*s = ft_strnew(1);
	while (!ft_strchr(*s, '\n') && (bytes = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[bytes] = '\0';
		temp = ft_strjoin(*s, buf);
		ft_strdel(s);
		*s = ft_strdup(temp);
		ft_strdel(&temp);
	}
	return (get_line(line, s, bytes));
}
