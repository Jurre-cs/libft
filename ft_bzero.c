/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 13:35:50 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/16 20:15:15 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*x;

	x = s;
	while (n > 0)
	{
		*x = '\0';
		x++;
		n--;
	}
	s = x;
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s[200] = ";ja;fkjzbvlbiawe";
// 	ft_bzero(s + 5, 5*sizeof(char));
// }