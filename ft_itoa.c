/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/21 15:39:29 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/23 15:47:51 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_intlen(int n1)
{
	int	i;

	i = 0;
	if (n1 < 0)
		i++;
	while (n1 / 10 != 0)
	{
		n1 /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		n1;
	int		i;

	n1 = n;
	i = ft_intlen(n);
	s = malloc((i + 2) * sizeof(char));
	if (!s)
		return (NULL);
	s[i + 2] = '\0';
	while (i >= 0)
	{
		if (n1 / 10)
			n1 %= 10;
		else
		{
			s[i] = n1 + '0';
			i--;
			n1 = n / 10;
			n /= 10;
		}
	}
	return (s);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%s", ft_itoa(93405791));
// }
