/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strutures.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaes-de <apaes-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:15:49 by apaes-de          #+#    #+#             */
/*   Updated: 2022/06/14 20:44:27 by apaes-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_cont	*cont(void)
{
	static t_cont	var_adress8;

	return (&var_adress8);
}
/*------------------------------------------------------------------*/

t_map	*map(void)
{
	static t_map	var_adress2;

	return (&var_adress2);
}
/*------------------------------------------------------------------*/

t_player	*player(void)
{
	static t_player	var_adress3;

	return (&var_adress3);
}
/*------------------------------------------------------------------*/

t_enemy_x	*enemy_x(void)
{
	static t_enemy_x	var_adress5;

	return (&var_adress5);
}
/*------------------------------------------------------------------*/

t_enemy_y	*enemy_y(void)
{
	static t_enemy_y	var_adress6;

	return (&var_adress6);
}
