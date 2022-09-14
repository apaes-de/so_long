/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keycode.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:03:58 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 22:11:50 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	player_a(int keycode, t_mlx *m)
{
	int	z;

	(void) m;
	z = 32;
	if ((keycode == 0)
		&& (map()->map[map()->i_y_map][map()->i_x_map - 1]) != '1')
	{
		player()->x_player -= 32;
		(player()->anim_player[0]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_A_1.xpm", &z, &z);
		(player()->anim_player[1]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_A_2.xpm", &z, &z);
		(player()->anim_player[2]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_A_3.xpm", &z, &z);
		(player()->anim_player[3]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_A_2.xpm", &z, &z);
		player()->steps++;
	}
}
/*------------------------------------------------------------------*/

void	player_d(int keycode, t_mlx *m)
{
	int	z;

	(void) m;
	z = 32;
	if ((keycode == 2)
		&& (map()->map[map()->i_y_map][map()->i_x_map + 1]) != '1')
	{
		player()->x_player += 32;
		(player()->anim_player[0]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_D_1.xpm", &z, &z);
		(player()->anim_player[1]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_D_2.xpm", &z, &z);
		(player()->anim_player[2]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_D_3.xpm", &z, &z);
		(player()->anim_player[3]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_D_2.xpm", &z, &z);
		player()->steps++;
	}
}
/*------------------------------------------------------------------*/

void	player_s(int keycode, t_mlx *m)
{
	int	z;

	(void) m;
	z = 32;
	if ((keycode == 1)
		&& (map()->map[map()->i_y_map + 1][map()->i_x_map]) != '1')
	{
		player()->y_player += 32;
		(player()->anim_player[0]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_S_1.xpm", &z, &z);
		(player()->anim_player[1]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_S_2.xpm", &z, &z);
		(player()->anim_player[2]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_S_3.xpm", &z, &z);
		(player()->anim_player[3]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_S_2.xpm", &z, &z);
		player()->steps++;
	}
}
/*------------------------------------------------------------------*/

void	player_w(int keycode, t_mlx *m)
{
	int	z;

	(void) m;
	z = 32;
	if ((keycode == 13)
		&& (map()->map[map()->i_y_map - 1][map()->i_x_map]) != '1')
	{
		player()->y_player -= 32;
		(player()->anim_player[0]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_W_1.xpm", &z, &z);
		(player()->anim_player[1]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_W_2.xpm", &z, &z);
		(player()->anim_player[2]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_W_3.xpm", &z, &z);
		(player()->anim_player[3]) = mlx_xpm_file_to_image(data()->mlx_ptr,
				"images/P_W_2.xpm", &z, &z);
		player()->steps++;
	}
}
