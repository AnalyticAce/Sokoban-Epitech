/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** count characters
*/

#include "soko.h"

int num_s(const char *str)
{
    int s = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') {
            s++;
        }
    }
    return s;
}

int num_p(const char *str)
{
    int p = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == 'P') {
            p++;
        }
    }
    return p;
}

int num_o(const char *str)
{
    int o = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == 'O') {
            o++;
        }
    }
    return o;
}

int num_x(const char *str)
{
    int x = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == 'X') {
            x++;
        }
    }
    return x;
}

int num_h(const char *str)
{
    int h = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == '#') {
            h++;
        }
    }
    return h;
}
