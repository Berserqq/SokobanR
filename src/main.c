#include <stdio.h>

#include "../include/level.h"
#include "../include/game.h"
#include "../include/render.h"
#include "../include/menu.h"

void start_game();

int main(){
    
    start_game();
}

void start_game(){
    Game game;
    MenuLevels levels[MAX_LEVELS];

    int level_count = get_levels(levels);

    for(int i = 0; i < level_count; i++){
        printf("%s: %s\n", levels[i].name, levels[i].path);
    }
    level_load(&game.level, levels[0].path);

    input_init();
    render_level(&game);
    player_position(&game);

    while (game.level.total_crates > crates_on_targets(&game))
    {
        int key = player_input();
        move_player(&game, key);
        render_level(&game);
    }
    input_shutdown();
}