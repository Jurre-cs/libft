/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/21 13:20:43 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/21 15:38:18 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	trimfront(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	trimback(char const *s1, char const *set)
{
	int	i;
	int	j;

	j = ft_strlen(s1) - 1;
	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1[j])
		{
			j--;
			i = 0;
		}
		else
			i++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*s2;

	k = 0;
	i = trimfront(s1, set);
	j = trimback(s1, set);
	s2 = malloc(((j - i) + 2) * sizeof(char));
	if (!s2)
		return (NULL);
	while (i != (j + 1))
	{
		s2[k] = s1[i];
		k++;
		i++;
	}
	s2[k] = '\0';
	return (s2);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%s", ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));
// }