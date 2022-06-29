/*
** EPITECH PROJECT, 2021
** task03
** File description:
** my_strlen
*/
void my_putchar(char c);

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] !=  0){
        i += 1;
    }
    return (i);
}
