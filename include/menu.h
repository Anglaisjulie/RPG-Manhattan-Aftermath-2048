/*
** EPITECH PROJECT, 2019
** PROJECT-011
** File description:
** menu.h
*/

#ifndef MENU_H_
#define MENU_H_

#include "dependancies.h"

void init_menu(menu_t *menu);
int menu_loop(game_t *game);
void destroy_menu(game_t *game);
int init_struct(game_t *game);
void init_screen(screen_t *screen);
int hover_menu_text(game_t *game);
void display_hover_menu(game_t *game, int hover);
void init_hover(hover_t *hover);
void init_hover_pos(hover_t *hover);
int how_to_play(game_t *game, sfEvent event);
int check_press(sfRenderWindow *window);
void init_how_to_play(menu_t *menu);
void close_menu_screen(sfRenderWindow *window, sfEvent event);
int pause_loop(game_t *game);
void init_pause(pause_t *pause_m);
void destroy_pause(pause_t *pause_m);

#endif /* !MENU_H_ */