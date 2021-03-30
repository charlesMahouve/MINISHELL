/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** str to work tab
*/
#include "my.h"
#include "my_minishell.h"

int my_pid(char *concat_cmd, char **cmd, char **my_envp)
{
    pid_t pid = fork();

    if (pid < 0)
        my_putstr_error("Error to execute minishell1\n");
    else if (pid > 0)
        wait(NULL);
    if (pid == 0) {
        if (execve(concat_cmd, cmd, my_envp) == -1)
            return (84);
    }
    return (0);
}

int my_cmd(char **cmd, char **my_envp)
{
    int count = 0;
    char *path = my_getpath(my_envp);
    char **tab = 0;
    tab = tab_fix(tab, path, count);
    char *exec_path = check_exec(tab, cmd[0]);
    char *cat;

    if (exec_path == NULL) {
        my_putstr_error(cmd[0]);
        my_putstr_error(": Command not found.\n");
        return (1);
    }
    cat = my_strcat(exec_path, cmd[0]);
    if (my_pid(cat, cmd, my_envp) == 84)
        return (84);
    free(cat);
    free(tab);
    free(exec_path);
    return (0);
}

void exit_set_envp(char **cmd, char **my_envp)
{
    if (my_strcmp(cmd[0], "exit") == 0) {
        my_putstr("exit\n");
        exit(0);
    }
    else if (my_strcmp(cmd[0], "envp") == 0)
        my_putmap(my_envp);
}

int build(char **cmd, char **my_envp)
{
    exit_set_envp(cmd, my_envp);
    if (my_strcmp(cmd[0], "unsetenvp") == 0) {
        write(2, "unsetenvp: Too few arguments.\n", 29);
        return (1);
    }
    else if (my_strcmp(cmd[0], "setenvp") == 0)
        my_putmap(my_envp);
    else
        if (my_cmd(cmd, my_envp) == 84)
            return (84);
    return (0);
}