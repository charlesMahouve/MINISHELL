/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** putendl
*/

#include "my.h"

void my_putendl(char const *s)
{
    my_putstr((char *)s);
    my_putchar('\n');
}