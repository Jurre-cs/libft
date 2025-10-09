/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 15:00:45 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/07 10:12:29 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%zu\n", ft_strlen(NULL));
// }
