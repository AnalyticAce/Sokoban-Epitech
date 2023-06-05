/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** errors
*/

#include "soko.h"
#include "myprintflib.h"

void usage(int ac, char **av)
{
    if (ac != 1 && (av[1][0] == '-' && av[1][1] == 'h')) {
        my_printf("USAGE\n\t\t./my_sokoban map\n\nDESCRIPTION\n");
        my_printf("\t\tmap\tfile representing the warehouse map, containing ");
        my_printf("'#' for walls,\n");
        my_printf("\t\t\t'P' for the player, 'X' for boxes and 'O' for ");
        my_printf("storage locations.\n");
        exit (0);
    }
}

char check_errors(int ac, char **av)
{
    struct stat err; stat(av[1], &err);
    int file = err.st_size;
    char *buf = malloc(sizeof(char) * (file + 1));
    int cd = open(av[1], O_RDONLY); int z = read(cd, buf, file);
    int nump = num_p(buf), numo = num_o(buf);
    int numx = num_x(buf);
    for (int s = 0; buf[s] != '\0'; s++) {
        if (buf[s] != ' ' && buf[s] != 'P' && buf[s] != 'X'
            && buf[s] != 'O' && buf[s] != '#' && buf[s] != '\n') {
            my_printf("Wrong file"); exit(84);
        } if (numx != numo) {
            my_printf("unequal number of objects"); exit(84);
        } if (nump != 1) {
            my_printf("More number of P"); exit(84);
        }
    } close(cd);
}

int check_arg(int ac, char **av)
{
    struct stat fi;
    if (ac < 2) {
        exit(84);
    } if (stat(av[1], &fi) == -1) {
        exit(84);
    } return 0;
}
