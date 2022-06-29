/*
** EPITECH PROJECT, 2021
** Day09
** File description:
** File Header
*/

#include <stdarg.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <assert.h>
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <pwd.h>
#include <time.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdbool.h>
#ifndef MY_H
    #define MY_H

typedef struct pgr_s
{
    char **env;
    int indice;
    int exit;
    char *ret;
    float droite;
    float milieu;
    float gauche;
    bool d;
}pgr_t;

void my_putchar(char c);
int my_getnbr(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
int alpha_l(char *str);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char **str_to_array(char *str, char *separator);
void getlidar(pgr_t *speed, char *buff, size_t bufsize);
void car_speed(pgr_t *speed, char *buff, size_t a, float z);
void turn_droite(pgr_t *speed, char *buff, size_t bufsize);
void turn_gauche(pgr_t *speed, char *buff, size_t bufsize);
void go_speed(pgr_t *speed, char *buff, size_t bufsize);

#endif
