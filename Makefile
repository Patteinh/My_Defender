##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Makefile
##

NAME	=	my_defender

CFLAGS	+= 	-I ./include/ -W -Wall -Wextra

LFLAGS 	= 	-L ./lib/ -lmy

SRC	=	src/main.c							\
		src/defender.c							\
		src/help/help.c							\
		src/reset_free/free_all.c					\
		src/reset_free/reset_defender.c					\
		src/reset_free/my_itoa.c					\
		src/set_defender/set_defender.c					\
		src/set_defender/set_mouse/set_mouse_pos.c			\
		src/set_defender/set_text/set_text.c				\
		src/set_defender/set_window/set_window.c			\
		src/set_defender/set_music/set_music.c				\
		src/set_defender/set_sprite/set_point/set_point.c		\
		src/set_defender/set_sprite/set_towers/set_towers.c		\
		src/set_defender/set_sprite/set_button/button_menu.c		\
		src/set_defender/set_sprite/set_button/button_settings.c	\
		src/set_defender/set_sprite/set_button/button_shop.c		\
		src/set_defender/set_sprite/set_button/button_play.c		\
		src/set_defender/set_sprite/set_button/button_win.c		\
		src/set_defender/set_sprite/set_button/button_lose.c		\
		src/set_defender/set_sprite/set_button/button_pause.c		\
		src/set_defender/set_sprite/set_button/button_help.c		\
		src/set_defender/set_sprite/set_attack/set_attack.c		\
		src/set_defender/set_sprite/set_spell/set_spell.c		\
		src/set_defender/set_sprite/set_background/set_background.c	\
		src/set_defender/set_sprite/set_mob/set_mob.c			\
		src/gestion/gestion_lm.c					\
		src/gestion/gestion_life.c					\
		src/gestion/gestion_money.c					\
		src/gestion/gestion_money_two.c					\
		src/gestion/gestion_money_three.c				\
		src/create/create_sprite_principal.c				\
		src/create/create_sprite_tower.c				\
		src/create/create_sprite_redirection.c				\
		src/create/create_sprite_utils.c				\
		src/create/create_text.c					\
		src/selections/select_choices.c					\
		src/selections/select_spell.c					\
		src/selections/select_disp_spell.c				\
		src/selections/select_marker_place_towers.c			\
		src/selections/select_where.c					\
		src/selections/select_music.c					\
		src/selections/select_redirections.c				\
		src/selections/select_state.c					\
		src/selections/select_state_two.c				\
		src/place/place_mark.c						\
		src/place/conditions_death_mobs.c				\
		src/place/death_position.c					\
		src/place/death_position_two.c					\
		src/place/display_attack.c					\
		src/draw/draw_tower.c						\
		src/attack_mobs/move_attack.c					\
		src/move_mob/moving_mob.c					\
		src/move_mob/loop_move.c					\
		src/move_mob/loop_move_two.c					\
		src/move_mob/loop_move_three.c					\
		src/move_mob/move_mobs.c					\
		src/move_mob/move_mobss.c	\
		src/move_mob/move_mobs_one.c					\
		src/move_mob/move_mobs_one_two.c	\
		src/move_mob/move_mobs_two.c					\
		src/move_mob/move_mobs_two_two.c				\
		src/move_mob/move_mobs_three.c					\
		src/move_mob/move_mobs_three_two.c				\
		src/move_mob/move_mobs_four.c					\
		src/move_mob/move_mobs_four_two.c				\
		src/move_mob/move_mobs_five.c					\
		src/move_mob/move_mobs_five_two.c				\
		src/reset_free/destroy_all.c					\

OBJ	=	$(SRC:.c=.o)

RMO	=	$(RM) src/*.o *~

MAKE	=	make

CSFML = -lcsfml-audio -lcsfml-window -lcsfml-system -lcsfml-graphics

all: $(NAME)

build_lib :
	$(MAKE) -C ./lib/

$(NAME): build_lib $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) $(CSFML) $(LFLAGS) -o $(NAME)

debug: MAKE += -E CFLAGS+=-g3
debug: CFLAGS += -g3
debug: $(NAME)

clean:
	$(RM) *~ \#*\#*

fclean: clean
	$(RM) $(NAME)
	$(RMO)
	$(RM) src/*.o *~
	$(RM) src/draw/*.o *~
	$(RM) src/help/*.o *~
	$(RM) src/place/*.o *~
	$(RM) src/create/*.o *~
	$(RM) src/gestion/*.o *~
	$(RM) src/move_mob/*.o *~
	$(RM) src/selections/*.o *~
	$(RM) src/reset_free/*.o *~
	$(RM) src/attack_mobs/*.o *~
	$(RM) src/set_defender/*.o *~
	$(RM) src/set_defender/set_text/*.o *~
	$(RM) src/set_defender/set_music/*.o *~
	$(RM) src/set_defender/set_mouse/*.o *~
	$(RM) src/set_defender/set_window/*.o *~
	$(RM) src/set_defender/set_sprite/set_mob/*.o *~
	$(RM) src/set_defender/set_sprite/set_spell/*.o *~
	$(RM) src/set_defender/set_sprite/set_point/*.o *~
	$(RM) src/set_defender/set_sprite/set_button/*.o *~
	$(RM) src/set_defender/set_sprite/set_attack/*.o *~
	$(RM) src/set_defender/set_sprite/set_towers/*.o *~
	$(RM) src/set_defender/set_sprite/set_background/*.o *~
	make fclean -C ./lib/

re: fclean all

git:
	git add .
	git commit -m "$m"
	git push -u origin main

.PHONY: all build_lib debug lean fclean re git
