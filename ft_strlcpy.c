/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 17:01:24 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/23 15:41:57 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!src || !dst || !size)
		return (0);
	size = size - 1;
	while (src && src[i] != '\0')
		i++;
	while (src[j] && size > 0)
	{
		dst[j] = src[j];
		j++;
		size--;
	}
	dst[j] = '\0';
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	int a;
// 	int b;
// 	int i = 6;
// 	char c[40] = "jafb;kah";
// 	char s[40] = ";knsa;fknsADA";
// 	a = ft_strlcpy(s, c, i);
// 	printf("%s : %d\n", s, a);
// 	b = strlcpy(s, c, i);
// 	printf("%s : %d\n", s, b);
// }
