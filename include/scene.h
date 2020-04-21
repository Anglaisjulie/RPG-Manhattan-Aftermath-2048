/*
** EPITECH PROJECT, 2020
** PROJECT-011
** File description:
** main scene prototype
*/

#ifndef SCENE_H_
#define SCENE_H_

#include "game_struct.h"

// main_scene.c

int main_scene_load(game_t *game);
void play_music(void);
int main_scene_loop(game_t *game, sfClock *timer);
void main_scene_update(game_t *game);

// load_entities.c

entities_t *load_entities_scene(int zombie);
entities_t *load_entities_scene(int zombie);

// set_zombie_anim.c

void set_zombie_animation(entities_t *entities);
void set_zombie_key_static(entities_t *entities);
void set_zombie_key_move(entities_t *entities);
void set_zombie_key_attack(entities_t *entities);

// set_player_animation.c

void set_player_animation(entities_t *entities);
void set_player_key_torch_static(entities_t *entities);
void set_player_key_pistol_static(entities_t *entities);
void set_player_key_rifle_static(entities_t *entities);
void set_player_key_knife_static(entities_t *entities);

// set_sound.ogg

void set_zombie_sound(entities_t *entities, int nb_zombie);
void set_player_sound(entities_t *entities);

// control.c

void player_controller(entities_t *entities, player_t *player
, sfEvent *event, sfRenderWindow * window);
int teleport_player_up(entities_t *entities, entities_t *save);
int teleport_player_down(entities_t *entities, entities_t *save);
int teleport_player_left(entities_t *entities, entities_t *save);
int teleport_player_right(entities_t *entities, entities_t *save);

// toggle_object.c

void player_switch_object(entities_t *entities
, player_t player, sfEvent *event);

// p_move_anim.c

void set_player_key_pistol_move(entities_t *entities);
void set_player_key_rifle_move(entities_t *entities);
void set_player_key_knife_move(entities_t *entities);

// p_attack_anim.c

void set_player_key_pistol_attack(entities_t *entities);
void set_player_key_rifle_attack(entities_t *entities);
void set_player_key_knife_attack(entities_t *entities);
void set_player_key_pistol_reload(entities_t *entities);
void set_player_key_rifle_reload(entities_t *entities);

// player_attack.c

int attack_entities(player_t *player, sfEvent *event
, sfRenderWindow *window);

// zombie_sound.c

void handle_zombie_sound(game_t *game);

// zombie_ai.c

void zombie_ai(entities_t *entities, player_t *player);

// player_sound.c

void handle_player_sound(game_t *game);

#endif /* !SCENE_H_ */
