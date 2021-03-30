/*
** EPITECH PROJECT, 2020
** minisehll
** File description:
** bzero
*/

#include "my.h"

void my_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return ;
    while (i < n)
        ((char *)s)[i++] = '\0';
}