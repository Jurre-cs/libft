/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 14:58:10 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/09 17:16:40 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;
	
	i = n - 1;
	while(n > 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i--;
		n--;
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	int i = 5;
	char c[40] = "wha";
	char s[40] = "what?thehell";
	ft_memmove(s + 3, c, i);
	// memmove(s + 3, c, i);
	printf("%s", s);
}