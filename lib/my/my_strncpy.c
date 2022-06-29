/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** Task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n ; i++) {
        dest[i] = src[i];
    }
    return (dest);
}
