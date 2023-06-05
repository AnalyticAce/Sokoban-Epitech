/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** moving player
*/

#include "soko.h"
#include "myprintflib.h"

pos posi(char **map, pos p)
{
    int i = 0; int j = 0;
    for (int i = 0; map[i] != NULL; i++) {
        for (j = 0; map[i][j] != '\0'; j++) {
            (map[i][j] == 'P') ? p.y = i, p.x = j : 0;
        }
    }
    return p;
}

void move_up(pos p, char **map)
{
    p = posi(map,p);
    if (map[p.y - 1][p.x] == ' ') {
        map[p.y - 1][p.x] = 'P';
        map[p.y][p.x] = ' ';
    } if (map[p.y - 1][p.x] == 'X' && map[p.y - 2][p.x] == ' ') {
        map[p.y - 1][p.x] = 'P';
        map[p.y - 2][p.x] = 'X';
        map[p.y][p.x] = ' ';
    } if (map[p.y - 1][p.x] == 'O') {
        map[p.y - 1][p.x] = 'P';
        map[p.y][p.x] = ' ';
    }  if (map[p.y - 1][p.x] == 'X' && map[p.y - 2][p.x] == 'O') {
        map[p.y - 1][p.x] = 'P';
        map[p.y - 2][p.x] = 'X';
        map[p.y][p.x] = ' ';
    }
}

void move_down(pos p, char **map)
{
    p = posi(map,p);
    if (map[p.y + 1][p.x] == ' ') {
        map[p.y + 1][p.x] = 'P';
        map[p.y][p.x] = ' ';
    } if (map[p.y + 1][p.x] == 'X' && map[p.y + 2][p.x] == ' ') {
        map[p.y + 1][p.x] = 'P';
        map[p.y + 2][p.x] = 'X';
        map[p.y][p.x] = ' ';
    } if (map[p.y + 1][p.x] == 'O') {
        map[p.y + 1][p.x] = 'P';
        map[p.y][p.x] = ' ';
    } if (map[p.y + 1][p.x] == 'X' && map[p.y + 2][p.x] == 'O') {
        map[p.y + 1][p.x] = 'P';
        map[p.y + 2][p.x] = 'X';
        map[p.y][p.x] = ' ';
    }
}

void move_right(pos p, char **map)
{
    p = posi(map,p);
    if (map[p.y][p.x + 1] == ' ') {
        map[p.y][p.x + 1] = 'P';
        map[p.y][p.x] = ' ';
    } if (map[p.y][p.x + 1] == 'X' && map[p.y][p.x + 2] == ' ') {
        map[p.y][p.x + 1] = 'P';
        map[p.y][p.x + 2] = 'X';
        map[p.y][p.x] = ' ';
    } if (map[p.y][p.x + 1] == 'O') {
        map[p.y][p.x + 1] = 'P';
        map[p.y][p.x] = ' ';
    } if (map[p.y][p.x + 1] == 'X' && map[p.y][p.x + 2] == 'O') {
        map[p.y][p.x + 1] = 'P';
        map[p.y][p.x + 2] = 'X';
        map[p.y][p.x] = ' ';
    }
}

void move_left(pos p, char **map)
{
    p = posi(map,p);
    if (map[p.y][p.x - 1] == ' ') {
        map[p.y][p.x - 1] = 'P';
        map[p.y][p.x] = ' ';
    } if (map[p.y][p.x - 1] == 'X' && map[p.y][p.x - 2] == ' ') {
        map[p.y][p.x - 1] = 'P';
        map[p.y][p.x - 2] = 'X';
        map[p.y][p.x] = ' ';
    } if (map[p.y][p.x - 1] == 'O') {
        map[p.y][p.x - 1] = 'P';
        map[p.y][p.x] = ' ';
    } if (map[p.y][p.x - 1] == 'X' && map[p.y][p.x - 2] == 'O') {
        map[p.y][p.x - 1] = 'P';
        map[p.y][p.x - 2] = 'X';
        map[p.y][p.x] = ' ';
    }
}
