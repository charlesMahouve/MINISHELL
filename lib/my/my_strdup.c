/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** string duplicate
*/

#include <stdlib.h>

#include <stdio.h>

static int my_strlength(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strdup(char *src)
{
    char *dest = malloc(sizeof(char) * (my_strlength(src) + 1));
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (src[i] == '\0')
        dest[i] = '\0';
    return (dest);
}
