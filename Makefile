CC =		gcc

NAME =		so_long

CFLAGS =	-Wall -Wextra -Werror

MLXFLAGS =	-lmlx -framework OpenGL -framework AppKit -o

FSANITIZE =	-fsanitize=address

SRCS =	exe.c \
		Getnextline/get_next_line.c \
		Getnextline/get_next_line_utils.c \
		ftprintf/ft_printf.c \
		ftprintf/print_character.c \
		ftprintf/print_decimal.c \
		ftprintf/print_hexadecimal_lower.c \
		ftprintf/print_hexadecimal_upper.c \
		ftprintf/print_pointer.c \
		ftprintf/print_string.c \
		ftprintf/print_u.c \
		so_long.c \
		mlx.c \
		strutures.c \
		render.c \
		ft_itoa.c \
		player_move.c \
		print_player.c \
		error_map.c \
		save_images.c \
		animations.c \
		keycode.c \
		colisions.c


OBJS =	$(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(FSANITIZE) $(CFLAGS) $(MLXFLAGS) $(NAME)


clean:
		@rm -f $(OBJS)
		@rm -rf $(FDIR)
		@echo "$(NAME) $(OBJS): Foi Limpo!"

fclean:	clean
		@rm -f $(NAME)
		@echo "$(NAME): Foi Limpo!"

re: fclean all

.PHONY: all clean fclean re
