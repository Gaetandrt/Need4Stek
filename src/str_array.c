/*
** EPITECH PROJECT, 2021
** main_lib
** File description:
** main
*/

#include "../include/my.h"

int limitp(char a, char *limit)
{
    int z = 0;

    while (z != my_strlen(limit)) {
        if (limit[z] == a)
            return (-1);
        z++;
    }
    return (0);
}

int instr(char *s, char c)
{
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    return count;
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int nb_lines(char *str, char *sep)
{
    int count = 0;
    int temp = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (limitp(str[i], sep) == -1)
            temp++;
        while (limitp(str[i], sep) != 0) {
            i++;
            count++;
        }
        if (count > temp) {
            count = 0;
            temp++;
        }
    }
    return temp;
}

char **str_to_array(char *str, char *separator)
{
    char **array = malloc(sizeof(char *) * (nb_lines(str, separator) + 1));
    int y = 0;

    for (int i = 0; i < (nb_lines(str, separator) + 1); i++)
        array[i] = malloc(sizeof(char) * (my_strlen(str) + 1));
    for (int i = 0, x = 0; str[i] != '\0'; i++, x++) {
        if (instr(separator, str[i]) > 0 && array[y][0] > 0) {
            array[y][x] = '\0';
            x = 0;
            y++;
        }
        while (limitp(str[i], separator) != 0)
            i++;
        array[y][x] = str[i];
        if (str[i + 1] == '\0')
            array[y][x + 1] = '\0';
    }
    array[y + 1] = NULL;
    return (array);
}
