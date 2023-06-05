/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** counters
*/

#include "soko.h"

int map_height(char *str)
{
    int i = 0;int j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            j++;
    } return (j + 1);
}

int map_width(char *str)
{
    int max_width = 0;
    int width = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        width = (str[i] == '\n') ? 0 : width + 1;
        max_width = (width > max_width) ? width : max_width;
    }
    return max_width;
}
