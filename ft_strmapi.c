

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>

char upper_even(unsigned int i, char c)
{
	if (i % 2 == 0)
		c -= 32;
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *s1;

	i  = strlen(s);
	s1 = calloc((i + 1), sizeof(char));
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	return (s1);
}

int main(void)
{
	printf("%s", ft_strmapi("helloworld", *upper_even));
}
