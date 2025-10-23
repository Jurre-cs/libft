/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 14:54:16 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/23 19:30:54 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	free_arr(char **arr, int len)
{
	while (--len >= 0)
		free(arr[len]);
	free(arr);
}

int	strcount(int amount, const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			amount++;
		i++;
	}
	return (amount);
}

char **strpointeri(const char *s, char **result, char c, int amount)
{
	int i;
	int j;
	int k;
	int prei;

	i = 0;
	j = 0;
	k = 0;
	while (k <= amount)
	{
		if (s[i] == c || s[i] == '\0')
		{
			prei = j;
			result[k] = ft_calloc(((i - j) + 1), sizeof(char));
			if (!result[k])
			{
				while (--k >= 0)
					free(result[k]);
				free(result);
				return (NULL);
			}
			while (j < i)
			{
				result[k][j - prei] = s[j];
				j++;
			}
			k++;
			while (s[i] == c)
			{
				i++;
				j++;
			}
		}
		i++;
	}
	result[k] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char 	**result;
	int 	amount;

	amount = 0;
	amount = strcount(amount, s, c);
	result = malloc((amount + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = strpointeri(s, result, c, amount);
	return (result);
}

// void	free_arr(char **arr, int len)
// {
// 	while (--len >= 0)
// 		free(arr[len]);
// 	free(arr);
// }

// int	find_next_word(char *s, int *start, int *end, char sep)
// {
// 	// while (s[*start] && s[*start] == sep)
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**result;
// 	int i, j, n, k, prei;
	
// 	i = 0;
// 	n = 0;
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] == c && s[i + 1] != c)
// 			n++;
// 		i++;
// 	}
// 	result = malloc((n + 1) * sizeof(char *));
// 	if (!result)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	while (k <= n)
// 	{
// 		if ((s[i] == c && s[i + 1] != c) || s[i] == '\0')
// 		{
// 			prei = j;
// 			result[k] = malloc((i - j) * sizeof(char));
// 			if (!result[k])
// 			{
// 				free_arr(result, k);
// 				return (NULL);
// 			}
// 			while (j < i)
// 			{
// 				result[k][j - prei] = s[j];
// 				j++;
// 			}
// 			k++;
// 			j++;
// 		}
// 		i++;
// 	}
// 	result[k] = NULL;
// 	return (result);
// }

#include <assert.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char **s;
	int i;
	i = 0;
	s = ft_split("---split----this for---me---!----", '-');

	while (s[i] != NULL)
	{
		printf("%s", s[i]);
		i++;
	}
	printf("%s", s[i]);
	return (0);
}
