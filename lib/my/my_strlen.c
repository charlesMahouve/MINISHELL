/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** strnew
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {

        i++;
    }
return i;
}
