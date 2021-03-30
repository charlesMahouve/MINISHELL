/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** smain
*/
#include "my.h"
#include "my_minishell.h"

int main_func(char **argv, char **my_envp, char **cmd)
{
    size_t c = 32;
    int count = 0;
    char *cmd_base;

    while (42) {
        my_putstr("$>");
        if (getline(&cmd_base, &c, stdin) == -1) {
            my_putstr("exit\n");
            exit(0);
        }
        cmd_base = filter_str(cmd_base);
        if (last_char_redirect(cmd_base) == 1)
            return (1);
        cmd = my_str_to_word_tab(cmd_base, count);
        if (build(cmd, my_envp) == 84)
            return (84);
    }
    free(cmd_base);
    return (0);
}

int main(int argc, char **argv, char **en)
{
    char **cmd = 0;

    if (argc != 1) {
        exit(84);
    }

    char **my_envp = create_envp(get_height_envp(en), get_width_envp(en), en);
    my_envp = my_get_envp(en, my_envp);
    char *path = my_gethome(my_envp);
    int return_value = main_func(argv, my_envp, cmd);

    if (return_value == 84 || return_value == 1)
        return (return_value);
    free(cmd);
    free(path);
    free(my_envp);
    return (0);
}