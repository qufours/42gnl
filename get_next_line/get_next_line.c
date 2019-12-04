/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:22:36 by qufours           #+#    #+#             */
/*   Updated: 2019/12/03 17:12:49 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_reall(char  *dst, const char *src)
{
    int     i;
    char    *dup;

    if (!src)
        return (NULL);
    i = 0;
    while (src[i])
        i++;
    if (!(dup = (char *)malloc(i + 1 * sizeof (char))))
        return (NULL);
    dup = ft_strlcpy(dst, src, i + 1);
    if (dst)
        free(dst);
    return (dup);
}

int		get_next_line(int fd, char **line)
{
    static  t_var   var;

	 if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0) < 0)
        return (-1);
    if (!(var.buff = (char *)malloc(BUFFER_SIZE + 1 * sizeof(char))))
        return (-1);
    if (!var.rest)
        var.rest = ft_reall(var.rest, "");
}