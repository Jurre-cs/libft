/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 10:20:59 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/09 14:32:09 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_isalpha());
// }