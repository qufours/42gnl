#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct  s_var
{
    int     size_read;
    char    *str;
    char    *buff;
    char    *rest;
}               t_var;