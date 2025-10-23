/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tmp.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/23 15:44:22 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/23 15:47:14 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*convert(int i, int ntmp, int n, char *s, int neg)
{
	while (i >= neg)
	{
		if (ntmp / 10)
			ntmp %= 10;
		else
		{
			s[i] = ntmp + '0';
			i--;
			ntmp = n / 10;
			n /= 10;
		}
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		ntmp;
	int		i;
	int		neg;

	if (n == 0)
		return ("0");
	if (n < 0)
		neg = 1;
	else
		neg = 0;
	i = ft_intlen(n);
	s = ft_calloc((i + neg + 2), sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	ntmp = n;
	s = convert(i, ntmp, n, s, neg);
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_itoa(-9));
// }