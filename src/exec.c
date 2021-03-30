/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** str to work tab
*/
#include "my.h"
#include "my_minishell.h"

char *read_dir(char *cmd, char *path)
{
    DIR *dir;
    struct dirent *dirent;

    dir = opendir(path);
    if (dir == NULL)
        return (NULL);
    while ((dirent = readdir(dir)) != 0) {
        if (my_strcmp(cmd, dirent->d_name) == 0) {
            closedir(dir);
            return (path);
        }
        dirent->d_name[0];
    }
    closedir(dir);
    return (NULL);
}

char *check_exec(char **tab, char *cmd)
{
    DIR *dir;
    struct dirent *dirent;
    int count_path = 0;

    while (tab[count_path]) {
        if ((tab[count_path] = read_dir(cmd, tab[count_path])) != NULL)
            return (tab[count_path]);
        count_path++;
    }
    return (NULL);
}