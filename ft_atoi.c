/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 14:04:05 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/30 18:01:04 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	out;

	i = 1;
	out = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			i *= -1;
		nptr++;
	}
	while (*nptr >= 48 && *nptr <= 57)
	{
		out *= 10;
		out += (*nptr - 48);
		nptr++;
	}
	return (out * i);
}
