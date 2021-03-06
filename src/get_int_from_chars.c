/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int_from_chars.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irhett <irhett@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 14:13:44 by irhett            #+#    #+#             */
/*   Updated: 2017/05/28 14:51:13 by irhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mgl.h"

unsigned int	get_int_from_chars(char a, char r, char g, char b)
{
	unsigned int	color;

	color = 0;
	color += (unsigned char)b;
	color += ((unsigned char)g * 256);
	color += ((unsigned char)r * 256 * 256);
	color += ((unsigned char)a * 256 * 256 * 256);
	return (color);
}
