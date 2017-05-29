/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redraw.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 16:05:30 by irhett            #+#    #+#             */
/*   Updated: 2017/05/28 16:32:50 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mgl.h"

void	redraw(t_win *w)
{
	unsigned int	y;
	unsigned int	x;
	unsigned int	c;

	y = 0;
	while (y <= 255) // red
	{
		x = 0;
		while (x <= 255) // gre
		{
			c = get_int_from_chars(0, x, y, w->blue);
			mlx_pixel_put(w->mlx, w->ptr, x, y, c);
			x++;
		}
		y++;
	}
}
