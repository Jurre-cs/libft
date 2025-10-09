/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 17:49:22 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/09 14:25:01 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	size = size - 1;
	if (size == 0)
		return(ft_strlen(src));
	while (dst && dst[i] != '\0')
		i++;
	while(size > 0)
	{
		dst[i + j] = src[j];
		j++;
		size--;
	}
	i = i + j;
	dst[i] = '\0';
	return(i);
}

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int i = 1;
	char c[40] = "asd";
	char s[40] = "kjasdlkjvbalkjblkds";
	a = ft_strlcat(s, c, i);
	printf("%s : %d\n",s , a);
	// b = strlcat(s, c, i);
	// printf("%s : %d\n", s, b);
}