#include <stdio.h>
#include "../include/level.h"
#include "../include/game.h"
#include "../include/render.h"

void start_game();

int main(){
    
    start_game();
}

void start_game(){
    Game game;
    level_load(&game.level, "../levels/level01.txt");
    
    input_init();
    render_level(&game.level);
    player_position(&game);

    while (game.level.crates > crates_on_targets(&game))
    {
        int key = player_input();
        move_player(&game, key);
        render_level(&game.level);
    }
}