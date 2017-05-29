/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_win.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 12:57:48 by irhett            #+#    #+#             */
/*   Updated: 2017/05/28 16:31:08 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mgl.h"

t_win	*init_win(void)
{
	t_win	*win;

	win = (t_win*)malloc(sizeof(t_win));
	if (!win)
	{
		ft_error("Unable to allocate memory for t_win");
		return (NULL);
	}
	ft_bzero(win, sizeof(t_win));
	win->mlx = mlx_init();
	win->ptr = mlx_new_window(win->mlx, WINDOW_SIZE, WINDOW_SIZE, "test windo");
	win->blue = 100;
	win->color = 0x00FFFFFF;
	return (win);
}

void	del_win(t_win *win)
{
	if (win)
	{
		if (win->ptr && win->mlx)
			mlx_destroy_window(win->mlx, win->ptr);
		ft_bzero(win, sizeof(t_win));
		free(win);
		win = NULL;
	}
	else
		ft_error("Passed NULL to del_win()");
}
