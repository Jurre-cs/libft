/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 17:22:00 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/23 15:40:51 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (little[0] == '\0' || !(little && big))
		return ((char *)big);
	while ((big[i] != '\0' && i < len))
	{
		if (big[i] == little[j])
		{
			i++;
			j++;
		}
		else if (little[j] == '\0')
			return ((char *)big + (i - j));
		else
		{
			i++;
			j = 0;
		}
	}
	return (NULL);
}

#include <stdio.h>

// int	main(void)
// {
// 	char big[40] = "asdfdsafsadfsadfsadfsadfsadfsafasdff";
// 	char little[40] = "asfdsaf";
// 	int len = 2;
// 	printf("%s", ft_strnstr(big, little, len));
// }