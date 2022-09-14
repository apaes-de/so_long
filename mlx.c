/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 20:55:36 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 22:03:03 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	end_game(t_mlx *m)
{
	(void) m;
	exit(0);
}
/*------------------------------------------------------------------*/

int	animations(t_mlx *m)
{
	static int	c;

	c++;
	if (c < 2000 && m)
		return (0);
	c = 0;
	map()->i_anim_back++;
	map()->i_anim_coin++;
	animations_2();
	animations_3();
	enemy_y()->i_anim_enemy++;
	enemy_x()->i_anim_enemy++;
	player()->i_anim_player++;
	if (map()->i_anim_back > 13)
		map()->i_anim_back = 0;
	if (map()->i_anim_coin > 5)
		map()->i_anim_coin = 0;
	if (player()->i_anim_player > 3)
		player()->i_anim_player = 0;
	if (enemy_y()->i_anim_enemy > 3)
		enemy_y()->i_anim_enemy = 0;
	if (enemy_x()->i_anim_enemy > 3)
		enemy_x()->i_anim_enemy = 0;
	print_player();
	return (0);
}
/*------------------------------------------------------------------*/

int	ft_mlx(void)
{
	data()->mlx_ptr = mlx_init();
	(data()->win_ptr) = mlx_new_window(data()->mlx_ptr,
			map()->size_x_map * 32, (map()->size_y_map + 1) * 32, "so_long");
	data()->z = 32;
	image_map_to_mlx();
	print_map();
	mlx_loop_hook(data()->mlx_ptr, animations, data());
	mlx_hook(data()->win_ptr, 2, 0, player_move, data());
	mlx_hook(data()->win_ptr, 17, 0, end_game, data());
	mlx_loop(data()->mlx_ptr);
	return (0);
}
