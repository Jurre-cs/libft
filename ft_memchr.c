/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 14:39:04 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/09 15:59:33 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char* d;

	d = (unsigned char *)s;
	i = 0;
	while ((d[i] != '\0' && d[i] != c) && (s && n > 0))
	{
		i++;
		n--;
	}
	if ((d[i] == '\0' || !s) || n == 0)
		return(NULL);
	return(d + i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "idkhwttotype";
// 	printf("%s", ft_memchr(s, 'w', 5));
// }