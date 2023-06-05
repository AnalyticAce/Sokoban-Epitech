/*
** EPITECH PROJECT, 2022
** radar
** File description:
** radar
*/

#ifndef soko_
    #define soko_
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <ncurses.h>

typedef struct {
    int y;
    int x;
} pos;

typedef struct {
    int y;
    int x;
    int ox;
    int oy;
} soko;

int map_width(char *str);
char *simple_tab(int argc, char **argv);
char **double_tab(int argc, char **argv);
void show_map(char **str);
int map_height(char *buffer);
pos posi(char **map, pos p);
void move_up(pos p, char **map);
void move_down(pos p, char **map);
void move_left(pos p, char **map);
void move_right(pos p, char **map);
char check_errors(int ac, char **av);
int check_arg(int ac, char **av);
void usage(int ac, char **av);
int num_s(const char *str);
int num_p(const char *str);
int num_o(const char *str);
int num_x(const char *str);
int num_h(const char *str);
soko find_o(char **map1, char **map2, soko  ban);
void function_call(int ac, char **av);
#endif
