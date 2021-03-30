/*
** EPITECH PROJECT, 2020
** my
** File description:
** new put number
*/

#include "my.h"

void  my_putnbr(int n)
{
    if (n == -2147483648) {
        my_putstr("-2147483648");
        return ;
    }
    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    if (n < 10)
        my_putchar(n + '0');
    else
    {
        my_putnbr(n / 10);
        my_putchar(n % 10 + '0');
    }
}