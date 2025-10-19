/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 16:31:37 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/17 17:55:46 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// typedef struct s_person {
// 	char *name;
// 	int age;
// } t_person;


// typedef int i32;

// t_person p;
// pg->name =  "fsdf";
// p.ae = 53644;

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t		i;

	i = 0;
	subs = malloc((len + 1)* sizeof(char));
	if (!subs)
		return (NULL);
	while ((s[start] != '\0' && s) && i < len)
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%s", ft_substr("idk what people want from me", 16, 13));
// }
