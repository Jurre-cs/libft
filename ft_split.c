

#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    int i,j,n,k, preI;
    char **result;

    i = 0;
    n = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
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
        if (s[i] == c || s[i] == '\0')
        {
            preI = j;
            result[k] = malloc((i - j) * sizeof(char));
            if (!result[k])
                return NULL;
            while(j < i)
            {
                result[k][j - preI] = s[j];
                j++;
            }
            k++;
            j++;
        }
        i++;
    }
    return (result);
}

#include <stdio.h>

int main(void)
{
    char **s;
    int i;

    i = 0;
    s = ft_split("hello  world is this okay", ' ');
    if (!s)
        return 1;  // <---------- fail on fail
    while (s[i] != NULL)
    {
        printf("%s\n", s[i]);
        free(s[i]);
        i++;
    }
    free(s);
    return 0;
}
