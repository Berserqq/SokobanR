#include <stdio.h>
#include <stdlib.h>

#include "../include/render.h"


void render_level(Level *level){
    system("clear");
    printf("\033[H");

    printf("%s", level->name);
    for (int y = 0; y < level->height; y++)
    {
        for (int x = 0; x < level->width; x++)
            putchar(level->cells[y][x]);
            putchar('\n');
    }

    printf("\n");
    printf("WASD - Move\n");
    printf("F    - Undo\n");
    printf("Q    - Back\n");
}