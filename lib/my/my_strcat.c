/*
** EPITECH PROJECT, 2020
** str
** File description:
** cat
*/
#include "my.h"
#include <stdlib.h>

char *my_strcat(char *path, char *cmd)
{
    int i = 0;
    int j = 0;
    int x = 0;
    char *tmp = malloc(sizeof(char) * 4096);

    while (path[i] != 0) {
        tmp[j] = path[i];
        i++;
        j++;
    }
    tmp[j] = '/';
    j++;
    while (cmd[x] != 0) {
        tmp[j] = cmd[x];
        x++;
        j++;
    }
    tmp[j] = '\0';
    return (tmp);
}