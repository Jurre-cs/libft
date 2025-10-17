/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 15:00:45 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/17 15:59:44 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>
// int main(void)
// {
// 	char s[6] = "hello";
// 	printf("%zu\n", ft_strlen(s + 3));
// }
