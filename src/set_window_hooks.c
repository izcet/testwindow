/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_window_hooks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 12:57:48 by irhett            #+#    #+#             */
/*   Updated: 2017/05/28 14:33:01 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mgl.h"

void	set_window_hooks(t_win *win)
{
	mlx_key_hook(win->ptr, key_pressed, win);
	mlx_mouse_hook(win->ptr, mouse_pressed,win);
	mlx_expose_hook(win->ptr, expose_hook, win);
	mlx_loop_hook(win->mlx, loop_hook, win);
}
