#include <stdio.h>
#include <stdlib.h>

#include "../include/render.h"
#include "../include/game.h"


void render_level(Game *game){
    char info[2][16];
    snprintf(info[0], sizeof(info[1]), "   Moves: %d", game->moves);
    snprintf(info[1], sizeof(info[2]), "   Boxes: %d/%d", crates_on_targets(game), game->level.total_crates);

    system("clear");
    printf("\033[H");

    printf("%s", game->level.name);
    for (int y = 0; y < game->level.height; y++)
    {
        for (int x = 0; x < game->level.width; x++){
            switch (game->level.cells[y][x])
            {
                case '@': printf("\033[34m@\033[0m"); break;
                case '$': printf("\033[33m$\033[0m"); break;
                case 'x': printf("\033[31mx\033[0m"); break;
                case 'O': printf("\033[32mO\033[0m"); break;
                default: putchar(game->level.cells[y][x]);
            }
        }
            
        if(y < 2){
            printf("%s", info[y]);
        }
        putchar('\n');
    }

    printf("\n");
    printf("WASD - Move\n");
    printf("F    - Undo\n");
    printf("Q    - Back\n");
}