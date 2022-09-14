/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:51:45 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/13 22:02:21 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	animations_3(void)
{
	int			i;

	i = 0;
	while (i < enemy_x()->cont_enemy)
	{
		if ((map()->map[(enemy_x()->y_enemy[i] / 32)][(enemy_x()->x_enemy[i]
					/ 32) + 1]) != '1' && enemy_x()->enemy_a[i] == 0)
			enemy_x()->x_enemy[i] += 32;
		else
			enemy_x()->enemy_a[i] = 1;
		if ((map()->map[enemy_x()->y_enemy[i] / 32][(enemy_x()->x_enemy[i]
					/ 32) - 1]) != '1' && enemy_x()->enemy_a[i] == 1)
			enemy_x()->x_enemy[i] -= 32;
		else
			enemy_x()->enemy_a[i] = 0;
		i++;
	}
}
/*------------------------------------------------------------------*/

void	animations_2(void)
{
	int			i;

	i = 0;
	while (i < enemy_y()->cont_enemy)
	{
		if ((map()->map[(enemy_y()->y_enemy[i] / 32) + 1][enemy_y()->x_enemy[i]
				/ 32]) != '1' && enemy_y()->enemy_a[i] == 0)
			enemy_y()->y_enemy[i] += 32;
		else
		{
			enemy_y()->enemy_a[i] = 1;
			enemy_y()->enemy_d = 1;
		}
		if ((map()->map[(enemy_y()->y_enemy[i] / 32) - 1][enemy_y()->x_enemy[i]
				/ 32]) != '1' && enemy_y()->enemy_a[i] == 1)
			enemy_y()->y_enemy[i] -= 32;
		else
		{
			enemy_y()->enemy_a[i] = 0;
			enemy_y()->enemy_d = 0;
		}
		i++;
	}
}
/*------------------------------------------------------------------*/
