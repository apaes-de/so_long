/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:55:28 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 22:44:11 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <mlx.h>

typedef struct s_filefd{
	int		fd;
	int		sargv;
	char	*line;
}				t_filefd;

typedef struct s_mlx{
	void		*mlx_ptr;
	void		*win_ptr;
	int			z;
}				t_mlx;

typedef struct s_maps
{
	char	**map;
	int		size_x_map;
	int		size_y_map;
	int		i_x_map;
	int		i_y_map;
	void	*wall;
	void	*back[14];
	int		i_anim_back;
	void	*coin[6];
	int		i_anim_coin;
	void	*exit_map;
	int		cont_exit;
	void	*black;
}				t_map;

typedef struct s_player
{
	void	*anim_player[4];
	int		i_anim_player;
	int		x_player;
	int		y_player;
	int		steps;
}				t_player;

typedef struct s_enemy_x
{
	void	*anim_enemy[4];
	int		i_anim_enemy;
	int		x_enemy[99];
	int		y_enemy[99];
	int		cont_enemy;
	int		enemy_d;
	int		enemy_a[99];
}				t_enemy_x;

typedef struct s_enemy_y
{
	void	*anim_enemy[4];
	int		i_anim_enemy;
	int		x_enemy[99];
	int		y_enemy[99];
	int		cont_enemy;
	int		enemy_d;
	int		enemy_a[99];
}				t_enemy_y;

typedef struct s_cont
{
	int		cont_c;
	int		cont_e;
	int		cont_p;
	int		i;
}				t_cont;

t_map		*map(void);
t_mlx		*data(void);
t_player	*player(void);
t_filefd	*fd(void);
t_enemy_x	*enemy_x(void);
t_enemy_y	*enemy_y(void);
t_cont		*cont(void);
int			ft_mlx(void);
int			mapa_matriz(int fd);
int			len(char *str);
void		error_map(void);
void		print_map(void);
char		*ft_itoa(int n);
void		print_player(void);
int			player_move(int keycode, t_mlx *m);
int			end_game(t_mlx *m);
int			main(int argc, char **argv);
void		error_map_max(void);
void		coli_exit(void);
void		coli_enemy(void);
void		image_map_to_mlx(void);
void		animations_2(void);
void		animations_3(void);
void		player_a(int keycode, t_mlx *m);
void		player_s(int keycode, t_mlx *m);
void		player_d(int keycode, t_mlx *m);
void		player_w(int keycode, t_mlx *m);

#endif
