/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** seperate path
*/

#include "my.h"

char *my_seperate_path(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ':')
            str[i] = ' ';
        i++;
    }
    return (str);
}
