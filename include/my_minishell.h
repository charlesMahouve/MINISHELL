/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** str to work tab
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>

#include "my.h"

/*build.c*/
int my_cmd(char **cmd, char **my_envp);
int my_pid(char *concat_cmd, char **cmd, char **my_envp);
int build(char **, char **);
void exit_set_envp(char **, char **);

/*clean_str.c*/
char *filter_str(char *);
int end_str(char *);

/*main.c*/
int main_func(char **, char **, char **);

/*error_handling.c*/
void my_putchar_error(char );
void my_putstr_error(char *);
int verif_last_char_redirection(char *, char );
int last_char_redirect(char *);

/*exec_path.c*/
char *read_dir(char *, char *);
char *check_exec(char **, char *);