/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** putchar
*/

#include "my.h"

void my_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}