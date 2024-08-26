/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mecauchy <mecauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:20:23 by mcauchy           #+#    #+#             */
/*   Updated: 2024/07/02 13:28:51 by mecauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	printf("Before set_point: x = %d, y = %d\n", point.x, point.y);
	set_point(&point);
	printf("After set_point: x = %d, y = %d\n", point.x, point.y);
	return (0);
}