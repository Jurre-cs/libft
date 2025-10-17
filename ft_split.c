/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jstomps <jstomps@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 14:54:16 by jstomps       #+#    #+#                 */
/*   Updated: 2025/10/16 14:54:09 by jstomps       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void free_arr(char **arr, int len)
{
	while (--len >= 0) 
		free(arr[len]);
	free(arr);
}

int find_next_word(char *s, int *start, int *end, char sep) 
{
	// while (s[*start] && s[*start] == sep)
}

char	**ft_split(char const *s, char c)
{
	int	i,	j,	n,	k,	prei;
	char	**result;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			n++;
		i++;
	}
	result = malloc((n + 1) * sizeof(char *));
	if (!result)
		return NULL;
	i = 0;
	j = 0;
	k = 0;
	while (k <= n)
	{
		if ((s[i] == c && s[i + 1] != c) || s[i] == '\0')
		{
			prei = j;
			result[k] = malloc((i - j) * sizeof(char));
			if (!result[k])
			{
				free_arr(result, k);
				return NULL;
			}
				while(j < i)
			{
				result[k][j - prei] = s[j];
				j++;
			}
			k++;
			j++;
		}
		i++;
	}
	result[k] = NULL;
	return (result);
}

#include <stdio.h>
#include <assert.h> 
#include <string.h>


// int main(void)
// {
// 	char **s;
// 	int i;
// 	i = 0;
// 	s = ft_split("why  are    we h  aving  trouble with this    ", ' ');
// 	assert(strcmp(s[0], "why") == 0);
// 	assert(strcmp(s[1], "are") == 0);

// 	// s = ft_split("why are we having  trouble with this", '\0');
// 	// s = ft_split("why are we having  trouble with this", 'z');
// 	// assert(strcmp(s[0], "why are we having  trouble with this") == 0);
// 	// assert(s[1] == NULL);
	
// 	// s = ft_split("", '\0');
// 	// assert(s[0] == NULL);
// 	// s = ft_split("", 'a');
// 	// assert(s[0] == NULL);


// 	// assert(strcmp(s[1], "why") == 0);
// 	// assert(strcmp(s[2], "why") == 0);
// 	// if (!s)
// 	// 	return 1;
// 	while (s[i] != NULL)
// 	{
// 		printf("%s\n", s[i]);
// 		i++;
// 	}
// 	return 0;
// }
