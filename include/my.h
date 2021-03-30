/*
** EPITECH PROJECT, 2020
** header
** File description:
** header
*/

#ifndef MY_H_
#define MY_H_

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <dirent.h>

typedef long double  t_ldouble;
typedef const char * t_cchar;
typedef long long int t_llong;
typedef unsigned long int t_ulong;
typedef unsigned long long int t_ullong;
typedef unsigned short int t_ushort;
typedef unsigned int t_uint;
typedef unsigned char t_uchar;
typedef long double t_dbl;

typedef struct s_list
{
    void *content;
    size_t content_size;
    struct s_list   *next;
}
    t_list;

int my_getnbr(char const *str);
int my_strlen(char *s);
char *my_strdup(char *src);
int my_atoi(const char *str);
int my_strcmp(char *s1, char *s2);
void my_put_nbr(int nb, char *base);
char **my_str_to_word_array(char *str, char *limit);
void my_putchar(char c);
char *my_strcat(char *path, char *cmd);
void my_bzero(void *s, size_t n);
char  *my_itoa(t_llong num);
char *my_itoa_base(t_ullong num, unsigned short base, char letter);
void my_putchar_fd(char c, int fd);
void my_putendl(char const *s);
void my_putnbr(int n);
int my_putstr(char const *str);
void my_putstr_fd(char const *s, int fd);
void my_strdel(char **as);
char *my_strjoin(const char *s1, const char *s2);
char *my_strnew(size_t size);
char **my_str_to_word_tab(char *str, int count);
char *my_seperate_path(char *str);
char **tab_fix(char **cmd, char *path, int count);
char **my_mapcpy(char **src, char **dest);
char *my_getpath(char **my_envp);
int get_home(char *src);
int get_ch_before_homevalue(char *my_envp);
char *my_gethome(char **my_envp);
int get_height_envp(char **envp);
int get_width_envp(char **envp);
char **create_envp(int height_max, int width_max, char **envp);
void my_putmap(char **map);
char **my_get_envp(char **envp, char **my_envp);
int my_cnt_wrd(char *str);
int my_cnt_char(char *str, int *a);

#endif
