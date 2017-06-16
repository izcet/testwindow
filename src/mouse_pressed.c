/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_pressed.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 20:09:14 by irhett            #+#    #+#             */
/*   Updated: 2017/06/15 22:01:30 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mgl.h"

int		mouse_pressed(int button, int x, int y, void *param)
{
	int				row;
	int				col;
	t_win			*win;
	unsigned char	r;
	unsigned char	g;

	win = (t_win*)param;
	row = -1;
	if (x <= (255) && y <= (255))
	{
		r = x;
		g = y;
		win->color = get_int_from_chars(0, r, g, win->blue);
		printf("r=%i g=%i b=%i\n", r, g, win->blue);
	}
	else
	{
		if (x - 12 < 0)
			x = 0;
		else if (x + 12 > WINDOW_SIZE)
			x = WINDOW_SIZE - 25;
		else
			x -= 12;
		if (y - 12 < 0)
			y = 0;
		else if (y + 12 > WINDOW_SIZE)
			y = WINDOW_SIZE - 25;
		else
			y -= 12;
		while (++row < 25)
		{
			col = -1;
			while (++col < 25)
				mlx_pixel_put(win->mlx, win->ptr, x + col, y + row, win->color);
		}
	}
	(void)button;
	return (0);
}
