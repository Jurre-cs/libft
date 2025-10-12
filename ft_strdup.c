

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *c;
	size_t size;
	int j;

	j = 0;
	size = ft_strlen(s);
	c = malloc(size * sizeof(char));
	while(size > 0)
	{
		c[j] = s[j];
		j++;
		size--;
	}
	return (c);
}
