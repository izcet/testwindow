/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mgl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 22:42:11 by irhett            #+#    #+#             */
/*   Updated: 2017/05/28 17:01:08 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MGL_H
# define MGL_H

# include "mlx.h"
# include "libft.h"
# include <fcntl.h>
# include <math.h>
# include <stdio.h>

# define WINDOW_SIZE	1500
typedef struct			s_window
{
	void				*ptr;
	void				*mlx;
	unsigned char		blue;
	unsigned int		color;
}						t_win;

t_win					*init_win();
void					del_win(t_win *win);

unsigned int			get_int_from_chars(char a, char r, char g, char b);
void					redraw(t_win *win);

void					set_window_hooks(t_win *win);
int						key_pressed(int keycode, void *param);
int						mouse_pressed(int button, int x, int y, void *param);
int						expose_hook(void *param);
int						loop_hook(void *param);

#endif
