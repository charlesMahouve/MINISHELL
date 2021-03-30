/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** putnbr
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c);

static int display_nbr(int nb)
{
    char n;

    if (nb < 0) {
        my_putchar('-');
        n = (((nb % 10) * -1) + '0');
        display_nbr(nb / -10);
        my_putchar(n);
    }
    if (nb > 0) {
        n = nb % 10 + '0';
        display_nbr(nb / 10);
        my_putchar(n);
    }
}

void my_put_nbr(int nb, char *base)
{
    int size = my_strlen(base);
    long nb1 = nb;

    if (nb1 < 0) {
        my_putchar('-');
        nb1 = -nb1; }
    if (nb1 >= size) {
        my_put_nbr(nb1 / size, base);
        my_put_nbr(nb1 % size, base);
    } else
        my_putchar(base[nb1]);
}