/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_callloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/11 13:35:50 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/14 18:37:40 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	product;
	void	*mem;

	if (nmemb > SIZE_MAX / size)
		return (NULL);
	product = nmemb * size;
	mem = malloc(product);
	if (!mem)
		return (NULL);
	ft_bzero(mem, nmemb * size);
	return (mem);
}

// int main(void)
// {
// 	void *test;
// 	test = ft_calloc(1550, sizeof(char));
// 	printf("%lu", test);
// }