/*
** EPITECH PROJECT, 2020
** my_atoi.c
** File description:
** my_atoi
*/

int my_atoi(char *str)
{
    int i = 0;
    int nb = 0;
    int mult = 1;

    for (i = 0; str[i]; i++);
    for (i--; i != -1; i--) {
        nb = nb + ((str[i] - 48) * mult);
        mult = (mult * 10);
    }
    return (nb);
}