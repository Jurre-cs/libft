/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 10:07:20 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/09 15:07:00 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isalnum(int c)
{
	if (c >= '0'&& c <= '9' || ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	if (!ft_isalnum)
// 	// printf("%d\n", ft_isalnum());
// 	printf("%d", isalnum(1));
// }