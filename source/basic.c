/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** count line
*/

#include "soko.h"
#include "myprintflib.h"

void show_map(char **str)
{
    for (int i = 0; str[i] != NULL; i++) {
        for (int j = 0; str[i][j] != '\0'; j++) {
            printw("%c", str[i][j]);
        }
    }
}

soko find_o(char **map1, char **map2, soko  ban)
{
    int i, j;
    for (i = 0; map1[i] != NULL; i++) {
        for (j = 0; map1[i][j] != '\0'; j++) {
            map1[i][j] = (map1[i][j] == ' ' && map2[i][j] == 'O') ? 'O'
                : map1[i][j];
        }
    } return (ban);
}

void function_call(int ac, char **av)
{
    pos p_pos; initscr(); usage(ac,av), check_arg(ac, av);
    char **map1 = double_tab(ac, av);
    check_errors(ac, av); p_pos = posi(map1, p_pos);
}

int main(int ac, char **av)
{
    pos p_pos;
    char **map1 = double_tab(ac, av);
    char **map2 = double_tab(ac, av); soko bani;
    function_call(ac, av);
    int th; keypad(stdscr, true);
    while (th != 32) {
        clear(); show_map(map1); th = getch();
        if (th == KEY_UP) {
            move_up(p_pos, map1); bani = find_o(map1, map2, bani);
        } if (th == KEY_DOWN) {
            move_down(p_pos, map1); bani = find_o(map1, map2, bani);
        } if (th == KEY_RIGHT) {
            move_right(p_pos, map1); bani = find_o(map1, map2, bani);
        } if (th == KEY_LEFT) {
            move_left(p_pos, map1); bani = find_o(map1, map2, bani);
        }
    } refresh(); endwin(); return 0;
}
