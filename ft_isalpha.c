/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/06 16:11:54 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/07 09:58:13 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_isalpha());
// }
