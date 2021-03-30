/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** string cmp
*/
#include "my.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i]) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    i = 0;
    while (s2[i]) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}