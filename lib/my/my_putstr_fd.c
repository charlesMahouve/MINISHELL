/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** str fd
*/

#include "my.h"

void my_putstr_fd(char const *s, int fd)
{
    int i;

    if (!s || !*s)
        return ;
    i = 0;
    while (s[i] != '\0')
        my_putchar_fd(s[i++], fd);
}