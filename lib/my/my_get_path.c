/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** get path
*/

#include "my.h"

int get_path(char *src)
{
    if (src != NULL && src[0] == 'P' &&
    src[1] == 'A' && src[2] == 'T' && src[3] == 'H') {
        return (0);
    }
    return (1);
}

char *my_getpath(char **my_envp)
{
    int width = get_width_envp(my_envp);
    int i = 0;
    int j = 0;
    int x = 0;
    char *my_path = malloc(sizeof(char) * width + 1);

    if (my_envp == NULL)
        return (NULL);
    while (get_path(my_envp[i]) != 0)
        i++;
    j = get_ch_before_homevalue(my_envp[i]);
    while (my_envp[i][j] != 0) {
        my_path[x] = my_envp[i][j];
        x++;
        j++;
    }
    my_path[x] = '\0';
    return (my_path);
}
