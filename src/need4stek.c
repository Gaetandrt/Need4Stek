/*
** EPITECH PROJECT, 2022
** ia
** File description:
** epitech
*/

#include "../include/my.h"

void car_turn(pgr_t *speed, char *buff, size_t a, float z)
{
    char *str = malloc(sizeof(char) * 100);
    char *indice = malloc(sizeof(char) * 5);

    getlidar(speed, buff, a);
    for (int i = 0; i < 100; str[i++] = 0);
    gcvt(z, 4, indice);
    strcat(str, "WHEELS_DIR:");
    strcat(str, indice);
    strcat(str, "\n");
    fprintf(stderr, "str =%s\n", str);
    my_putstr(str);
    getline(&buff, &a, stdin);
}

void car_speed(pgr_t *speed, char *buff, size_t a, float z)
{
    char *str = malloc(sizeof(char) * 100);
    char *indice = malloc(sizeof(char) * 5);

    getlidar(speed, buff, a);
    for (int i = 0; i < 100; str[i++] = 0);
    gcvt(z, 4, indice);
    strcat(str, "CAR_FORWARD:");
    strcat(str, indice);
    strcat(str, "\n");
    my_putstr(str);
    getline(&buff, &a, stdin);
}

void getlidar(pgr_t *speed, char *buff, size_t a)
{
    char **tab = NULL;
    float la;
    float d;

    my_putstr("GET_INFO_LIDAR\n");
    getline(&buff, &a, stdin);
    speed->env = str_to_array(buff, ":");
    tab = str_to_array(buff, ":");
    la = atof(tab[3]);
    d = atof(tab[34]);
    speed->droite = d;
    speed->milieu = atof(tab[18]);
    speed->gauche = la;
}

int main(void)
{
    size_t bufsize = 2048;
    pgr_t *speed = malloc(sizeof(speed));
    char *buff = malloc(sizeof(char) * bufsize);

    my_putstr("START_SIMULATION\n");
    getline(&buff, &bufsize, stdin);
    speed->d = false;
    getlidar(speed, buff, bufsize);
    while (1) {
        go_speed(speed, buff, bufsize);
        if (speed->gauche > 100 && speed->droite > 100)
            car_speed(speed, buff, bufsize, 0.05);
        else
            car_speed(speed, buff, bufsize, 0.01);
        getlidar(speed, buff, bufsize);
        if (speed->gauche < 180 && speed->milieu < 600)
            turn_droite(speed, buff, bufsize);
        getlidar(speed, buff, bufsize);
        if (speed->droite < 160 && speed->milieu < 600)
            turn_gauche(speed, buff, bufsize);
    }
}
