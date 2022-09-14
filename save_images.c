/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 21:58:20 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 20:54:03 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	image_map_to_mlx_player_coin(void)
{
	int	z;

	z = 32;
	(player()->anim_player[0]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/P_S_1.xpm", &z, &z);
	(player()->anim_player[1]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/P_S_2.xpm", &z, &z);
	(player()->anim_player[2]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/P_S_3.xpm", &z, &z);
	(player()->anim_player[3]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/P_S_2.xpm", &z, &z);
	(player()->i_anim_player) = 0;
	(map()->coin[0]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/C_1.xpm", &z, &z);
	(map()->coin[1]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/C_2.xpm", &z, &z);
	(map()->coin[2]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/C_3.xpm", &z, &z);
	(map()->coin[3]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/C_4.xpm", &z, &z);
	(map()->coin[4]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/C_5.xpm", &z, &z);
	(map()->coin[5]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/C_6.xpm", &z, &z);
	(map()->i_anim_coin) = 0;
}

void	image_map_to_mlx_enemy(void)
{
	int	z;

	z = 32;
	(enemy_x()->anim_enemy[0]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/E_S_1.xpm", &z, &z);
	(enemy_x()->anim_enemy[1]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/E_S_2.xpm", &z, &z);
	(enemy_x()->anim_enemy[2]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/E_S_3.xpm", &z, &z);
	(enemy_x()->anim_enemy[3]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/E_S_2.xpm", &z, &z);
	(enemy_x()->i_anim_enemy) = 0;
	(enemy_y()->anim_enemy[0]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/E_S_1.xpm", &z, &z);
	(enemy_y()->anim_enemy[1]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/E_S_2.xpm", &z, &z);
	(enemy_y()->anim_enemy[2]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/E_S_3.xpm", &z, &z);
	(enemy_y()->anim_enemy[3]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/E_S_2.xpm", &z, &z);
	(enemy_y()->i_anim_enemy) = 0;
}
/*------------------------------------------------------------------*/

void	image_map_to_mlx_back_2(void)
{
	int	z;

	z = 32;
	(map()->wall) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/wall.xpm", &z, &z);
	(map()->back[0]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_1.xpm", &z, &z);
	(map()->back[1]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_2.xpm", &z, &z);
	(map()->back[2]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_3.xpm", &z, &z);
	(map()->back[3]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_4.xpm", &z, &z);
	(map()->back[4]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_5.xpm", &z, &z);
	(map()->back[5]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_6.xpm", &z, &z);
	(map()->back[6]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_7.xpm", &z, &z);
	(map()->back[7]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_8.xpm", &z, &z);
}
/*------------------------------------------------------------------*/

void	image_map_to_mlx_back(void)
{
	int	z;

	z = 32;
	image_map_to_mlx_back_2();
	(map()->back[8]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_9.xpm", &z, &z);
	(map()->back[9]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_10.xpm", &z, &z);
	(map()->back[10]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_11.xpm", &z, &z);
	(map()->back[11]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_12.xpm", &z, &z);
	(map()->back[12]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_13.xpm", &z, &z);
	(map()->back[13]) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/back_14.xpm", &z, &z);
	(map()->i_anim_back) = 0;
}
/*------------------------------------------------------------------*/

void	image_map_to_mlx(void)
{
	int	z;

	z = 32;
	(map()->exit_map) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/exit.xpm", &z, &z);
	(map()->black) = mlx_xpm_file_to_image(data()->mlx_ptr,
			"images/black.xpm", &z, &z);
	image_map_to_mlx_player_coin();
	image_map_to_mlx_enemy();
	image_map_to_mlx_back();
}
