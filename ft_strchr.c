/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 12:33:36 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/17 16:09:02 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return ((char *)s + i);
}

// char *ft_strrchr(const char *s, int c)
// {
// 	int i;

// 	if (!s)
// 		return(NULL);
// 	i = ft_strlen(s);
// 	while (s[i] != c)
// 	{
// 		if (i == 0)
// 			return(NULL);
// 		i--;
// 	}
// 	return ((char *)s + i);
// }


// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "idkhattotype";
// 	printf("%s", ft_strchr(s, 'w'));
// }
