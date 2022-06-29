/*
** EPITECH PROJECT, 2021
** task01
** File description:
** My_swap
*/

int my_strlen(char const *str);

int my_strncmp(const char *s1, const char *s2, int n)
{
    while (*s1 == *s2 && n > 0) {
        if (*s1 == '\0')
            return 0;
        s1 += 1;
        s2 += 1;
        n--;
    }
    if (n != 0)
        return -(1);
    return 0;
}
