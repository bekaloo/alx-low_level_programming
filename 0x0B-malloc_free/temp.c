#include "holberton.h"
#include "100-argstostr.c"
#include <stdlib.h>


int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}

char *argstostr(int ac, char **av)
{
	int len = 0, i, j;
	char *str = NULL, *str_tmp = NULL;

	if (!ac || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, ++len)
		for (j = 0; av[i][j]; j++)
			++len;

	str = malloc(sizeof(char) * (len + 1)), str_tmp = str;
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, (*str++ = '\n'))
		for (j = 0; av[i][j]; j++)
			*str++ = av[i][j];
	*str = '\0';
	return (str_tmp);
}
