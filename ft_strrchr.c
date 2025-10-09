/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 14:45:53 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/08 16:57:33 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int i;

	if (!s)
		return(NULL);
	i = ft_strlen(s);
	while (s[i] != c)
	{
		if (i == 0)
			return(NULL);
		i--;
	}
	return ((char *)s + i);
}

#include <stdio.h>

int	main(void)
{
	char s[] = "";
	printf("%s", ft_strrchr(s, 'w'));
}