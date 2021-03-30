/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** getenvp
*/

#include "my.h"

int get_height_envp(char **envp)
{
    int i = 0;
    int height_max = 0;

    while (envp[i] != NULL) {
        i++;
        height_max++;
    }
    return (height_max);
}

int get_width_envp(char **envp)
{
    int i = 0;
    int j = 0;
    int width_max = 0;

    while (envp[i] != NULL) {
        while (envp[i][j] != '\0') {
            j++;
            width_max++;
        }
        j = 0;
        i++;
    }
    return (width_max);
}

char **create_envp(int height_max, int width_max, char **envp)
{
    int i = 0;
    int j = 0;

    height_max = get_height_envp(envp);
    width_max = get_width_envp(envp);
    char **map = malloc(sizeof(char *) * height_max + 1);

    while (i < height_max + 1) {
        map[i] = malloc(sizeof(char) * width_max + 1);
        i++;
    }
    return (map);
}

void my_putmap(char **map)
{
    int i = 0;

    while (map[i] != NULL) {
        my_putstr(map[i]);
        my_putchar('\n');
        i++;
    }
}

char **my_get_envp(char **envp, char **my_envp)
{
    if (envp == NULL || my_mapcpy(envp, my_envp) == NULL)
        return (NULL);
    my_mapcpy(envp, my_envp);
    return (my_envp);
}
