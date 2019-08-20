/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:34:04 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/26 07:42:49 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 500
# include "libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <stdlib.h>

int		get_next_line(const int fd, char **line);

#endif
