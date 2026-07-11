#ifndef MENU_H
#define MENU_H

#define MAX_LEVELS 100

#include "level.h"

typedef struct 
{
    char levels[MAX_LEVELS];
}Menu;

typedef struct
{
    char path[MAX_LEVEL_PATH];
    char name[MAX_LEVEL_NAME];
}MenuLevels;



void main_menu();
int get_levels(MenuLevels levels[MAX_LEVELS]);
int compare_levels(const void *a, const void *b);

#endif