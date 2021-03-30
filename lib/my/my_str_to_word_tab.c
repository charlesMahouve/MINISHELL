/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** str to work tab
*/

#include "my.h"

char **my_str_to_word_tab(char *str, int count)
{
    int i = 0;
    int	j = 0;
    int	k = 0;
    char **map = malloc(sizeof(char *) * my_cnt_wrd(str) + 1);

    while (i < my_cnt_wrd(str) + 1) {
        count = k;
        j = 0;
        map[i] = malloc(sizeof(char) * my_cnt_char(str , &k) + 1);
        while (str[count] != ' ' && str[count] != '\0') {
            map[i][j] = str[count];
            count++;
            j++;
        }
        map[i][j] = '\0';
        k = k + 1;
        i++;
    }
    map[my_cnt_wrd(str) + 1] = NULL;
    return (map);
}
