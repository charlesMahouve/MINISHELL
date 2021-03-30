/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** get home
*/

#include "my.h"

int get_home(char *src)
{
    if (src != NULL && src[0] == 'H' &&
    src[1] == 'O' && src[2] == 'M' &&
    src[3] == 'E') {
        return (0);
    }
    return (1);
}

int get_ch_before_homevalue(char *my_envp)
{
    int i = 0;

    while (my_envp[i] != '=') {
        i++;
    }
    i++;
    return (i);
}

char *my_gethome(char **my_envp)
{
    int width = get_width_envp(my_envp);
    int i = 0;
    int j = 0;
    int x = 0;
    char *my_home = malloc(sizeof(char) * width + 1);

    while (get_home(my_envp[i]) != 0)
        i++;
    j = get_ch_before_homevalue(my_envp[i]);
    while (my_envp[i][j] != 0) {
        my_home[x] = my_envp[i][j];
        x++;
        j++;
    }
    my_home[x] = '\0';
    free(my_home);
    return (my_home);
}
