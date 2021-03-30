/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** myitoa
*/

#include "my.h"

char *my_itoa(t_llong num)
{
        return (my_itoa_base(num, 10, 'a'));
}