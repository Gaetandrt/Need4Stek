/*
** EPITECH PROJECT, 2021
** main_lib
** File description:
** main
*/

#include "../include/my.h"

void turn_droite(pgr_t *speed, char *buff, size_t bufsize)
{
    while (speed->gauche < 180 && speed->milieu < 600) {
        getlidar(speed, buff, bufsize);
        my_putstr("WHEELS_DIR:-0.4\n");
        getline(&buff, &bufsize, stdin);
        getlidar(speed, buff, bufsize);
        if (speed->milieu > 550 && speed->gauche > 150)
            break;
        if (speed->droite < 150)
            break;
            }
}

void turn_gauche(pgr_t *speed, char *buff, size_t bufsize)
{
    while (speed->droite < 160 && speed->milieu < 600) {
        getlidar(speed, buff, bufsize);
        my_putstr("WHEELS_DIR:0.4\n");
        getline(&buff, &bufsize, stdin);
        getlidar(speed, buff, bufsize);
        if (speed->milieu > 550 && speed->droite > 150 )
            break;
        if (speed->gauche < 150)
            break;
            }
}

void go_speed(pgr_t *speed, char *buff, size_t bufsize)
{
    while (speed->milieu > 700 && speed->droite > 180 && speed->droite > 180) {
        getlidar(speed, buff, bufsize);
        car_speed(speed, buff, bufsize, 0.2);
        my_putstr("WHEELS_DIR:0.0\n");
        getline(&buff, &bufsize, stdin);
        if (speed->gauche < 200 || speed->droite < 200)
            break;
            }
}
