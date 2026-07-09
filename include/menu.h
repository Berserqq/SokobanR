#ifndef MENU_H
#define MENU_H

#define MAX_LEVELS 100

typedef struct 
{
    char levels[MAX_LEVELS];
}Menu;


void main_menu();
void get_levels();

#endif