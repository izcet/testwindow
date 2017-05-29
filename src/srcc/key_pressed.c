/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_pressed.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/25 22:17:59 by irhett            #+#    #+#             */
/*   Updated: 2017/05/28 16:36:04 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mgl.h"

#define KEY_ESC 53
#define KEY_A	0
#define KEY_S	1
#define KEY_D	2
#define KEY_F	3	

int				key_pressed(int keycode, void *ptr)
{
	t_win	*win;

	win = (t_win*)ptr;
	if (keycode == KEY_ESC)
	{
		del_win(win);
		exit(0);
	}
	if (keycode == KEY_A)
	{
		if (win->blue >= 10)
			win->blue -= 10;
		else
			win->blue = 0;
	}
	if (keycode == KEY_S)
	{
		if (win->blue > 0)
			win->blue--;
		else
			win->blue = 0;
	}
	if (keycode == KEY_D)
	{
		if (win->blue < 255)
			win->blue++;
		else
			win->blue = 255;
	}
	if (keycode == KEY_F)
	{
		if (win->blue <= 245)
			win->blue += 10;
		else
			win->blue = 255;
	}
	redraw(win);
	return (0);
}
