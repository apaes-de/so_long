/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:29:24 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/14 20:44:17 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf/ft_printf.h"
#include "so_long.h"

void	screen_text(void)
{
	int	i;

	i = 0;
	while (i < (map()->size_x_map * 32))
	{
		mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
			map()->black, i, map()->size_y_map * 32);
		i = i + 32;
	}
	mlx_string_put(data()->mlx_ptr, data()->win_ptr, 5,
		map()->size_y_map * 32 + 4, 50000, "Steps:");
	mlx_string_put(data()->mlx_ptr, data()->win_ptr, 70,
		map()->size_y_map * 32 + 4, 50000, ft_itoa(player()->steps));
	ft_printf("\nSteps: %i", player()->steps);
}
/*------------------------------------------------------------------*/

int	player_move(int keycode, t_mlx *m)
{
	(void) m;
	mlx_put_image_to_window(data()->mlx_ptr, data()->win_ptr,
		map()->back, player()->x_player, player()->y_player);
	map()->i_x_map = (player()->x_player) / 32;
	map()->i_y_map = (player()->y_player) / 32;
	player_a (keycode, data());
	player_s (keycode, data());
	player_d (keycode, data());
	player_w (keycode, data());
	if (keycode == 53)
	{
		exit(0);
	}
	screen_text();
	print_player();
	return (0);
}
