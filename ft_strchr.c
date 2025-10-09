/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 12:33:36 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/09 16:27:10 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while ((s[i] != '\0' && s[i] != c) && s)
		i++;
	if (s[i] == '\0' || !s)
		return(NULL);
	return ((char *)s + i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "idkhattotype";
// 	printf("%s", ft_strchr(s, 'w'));
// }
