/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/17 15:02:56 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/17 16:15:26 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*srtn;
	size_t	size;
	size_t	j;

	j = 0;
	size = ft_strlen(s);
	srtn = malloc((size + 1) * sizeof(char));
	if (!srtn)
		return (NULL);
	while (size > 0)
	{
		srtn[j] = s[j];
		j++;
		size--;
	}
	srtn[j]= '\0';
	return (srtn);
}
