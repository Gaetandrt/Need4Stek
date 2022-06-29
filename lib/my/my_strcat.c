/*
** EPITECH PROJECT, 2021
** task04
** File description:
** my_compute_power_rec
*/

char *my_strcat(char *dest, char const *str)
{
    int cpt = 0;
    int i = 0;

    while (dest[cpt] != '\0') {
        cpt = cpt + 1;
    }
    while (str[i] != '\0') {
        dest[cpt] = str[i];
        i = i + 1;
        cpt = cpt + 1;
    }
    return dest;
}
