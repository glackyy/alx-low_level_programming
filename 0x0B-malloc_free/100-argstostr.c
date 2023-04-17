#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * argstostr - Entry Function
 * @ac: int
 * @av: int
 * Return: string (SUCCESS)
 */
char *argstostr(int ac, char **av)
{
char *string;
int i, j, k;
int len;
if (ac == 0 || av == NULL)
	return (NULL);
len = 0;
for (i = 0 ; i < ac ; i++)
{
	for (j = 0 ; av[i][j] != '\0' ; j++)
		len++;
	len += ac;
}
string = malloc((len + 1) *sizeof(char));
if (string == NULL)
	return (NULL);
k = 0;
for (i = 0 ; i < ac ; i++)
{
	for (j = 0 ; av[i][j] != '\0' ; j++)
		string[k++] = av[i][j];
	string[k++] = '\n';
}
string[k] = '\0';
return (string);
}
