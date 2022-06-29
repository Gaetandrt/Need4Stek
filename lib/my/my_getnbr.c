/*
** EPITECH PROJECT, 2021
** Day04
** File description:
** Task05 - MY_GETNBR
*/

int my_getnbr(char *str)
{
    int mom;
    int sign;

    sign = 1;
    mom = 0;
    if (*str == '-') {
        str++;
        sign = -1;
        }
    while (*str) {
        mom = mom * 10;
        mom = mom + *str - '0';
        str++;
        }
    return (mom * sign);
}
