/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 16:58:55 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/14 18:29:15 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] == s2[i] && i < n) && (s1 && s2))
		i++;
	if (s1[i] == s2[i])
		return (0);
	return (s1[i] - s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int i = 23;
// 	char c[40] = "jafb;";
// 	char s[40] = "jafb;kah";
// 	i = ft_strncmp(s, c, i);
// 	printf("%d", i);
// }