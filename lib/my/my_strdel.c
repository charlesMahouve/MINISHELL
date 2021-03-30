/*
** EPITECH PROJECT, 2020
** str
** File description:
** del
*/

#include "my.h"

void my_strdel(char **as)
{
    if (!as || !*as)
        return ;
    my_bzero(*as, my_strlen(*as));
    free(*as);
    *as = NULL;
}