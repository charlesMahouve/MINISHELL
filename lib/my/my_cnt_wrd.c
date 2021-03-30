/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** count words
*/

#include "my.h"

int my_cnt_wrd(char *str)
{
    int i = 0;
    int counter = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\0')
            counter++;
        i++;
    }
    return (counter);
}
