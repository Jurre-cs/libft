/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 14:04:05 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/17 18:42:57 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
	int i;
	int out;

	i = 1;
	out = 0;
	while (*nptr != '\0')
	{
		if (*nptr == '-' || *nptr == '+')
		{
			if (i == -1)
				return (0);
			if (*nptr == '-')
				i *= -1;
			nptr++;
		}
		if (*nptr >= 48 && *nptr <= 57)
		{
			out *= 10;
			out += (*nptr - 48);
			nptr++;
		}
		else
			return (out * i);
	}
	return (out * i);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *s = "whatthehell";
// 	printf(ft_atoi(s));
// }