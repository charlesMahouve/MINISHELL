/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** tab fixing
*/

#include "my.h"

char **tab_fix(char **cmd, char *path, int count)
{
    path = my_seperate_path(path);
    cmd = my_str_to_word_tab(path, count);
    return (cmd);
}
