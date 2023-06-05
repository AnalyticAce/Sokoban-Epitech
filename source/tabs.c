/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** tabs
*/

#include "soko.h"

char *simple_tab(int argc, char **argv)
{
    struct stat tab;
    stat (argv[1], &tab);
    int map = tab.st_size;
    char *buf = malloc(sizeof(char) * (map + 1));
    int cd = open(argv[1], O_RDONLY);
    int z = read(cd, buf, map);
    close(cd);
    return (buf);
}

char **double_tab(int argc, char **argv)
{
    char *str = simple_tab(argc, argv); int a = 0;
    int h = map_height(str), w = map_width(str);
    char **allocator = malloc(sizeof(char *) * (h + 1));
    for (int i = 0; i < h; i++) {
        allocator[i] = malloc(sizeof(char *) * (w + 1));
    }
    int z = 0, b = 0, c = 0;
    for (b = 0; b < h; b++) {
        for (c = 0; c < w + 1 && str[z]; c++) {
            allocator[b][c] = str[z];
            z++;
        }
        allocator[b][c] = '\0';
    }
    allocator[b] = NULL;
    return allocator;
}
