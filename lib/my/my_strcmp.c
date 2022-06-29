/*
** EPITECH PROJECT, 2021
** task01
** File description:
** My_swap
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i]) {
        if (my_strlen(s1) == i)
            return 0;
        i++;
    }
    if (s1[i] > s2[i]) {
        return s1[i];
    } else {
        return -s2[i];
    }
}
