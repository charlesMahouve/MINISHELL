/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** count char
*/

#include "my.h"

int my_cnt_char(char *str, int *a)
{
    int len = 0;

    while (str[*a] != ' ' && str[*a] != '\0') {
        len++;
        *a = *a + 1;
    }
    return (len);
}
