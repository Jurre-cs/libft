/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 15:59:54 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/16 14:49:13 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*c;

	s = (unsigned char *)s1;
	c = (unsigned char *)s2;
	i = 0;
	while ((s[i] == c[i] && i < n) && (s && c))
		i++;
	if (s[i] == c[i])
		return (0);
	return (s[i] - c[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i = 2;
// 	char c[40] = "jafb;";
// 	char s[40] = "jafb;kah";
// 	i = ft_memcmp(s, c, i);
// 	printf("%d", i);
// }