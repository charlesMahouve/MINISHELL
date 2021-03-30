/*
** EPITECH PROJECT, 2020
** get number
** File description:
** getbr
*/

#include <limits.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int n = 0;

    if (str[0] == '-' && str[1] != '\0')
        i++;
    while (str[i] != '\0') {
        n = n + str[i] - 48;
        n = n * 10;
        i++;
    }
    n = n / 10;
    if (str[0] == '-')
        return (-1 * n);
    else
        return (n);
}