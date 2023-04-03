#include "main.h"
#include <stddef.h>
/**
 * _strstr - Entry Function
 * @haystack: char
 * @needle: char
 * Return: haystack or NULL (SUCCESS)
 */
char *_strstr(char *haystack, char *needle)
{
char *hay, *nee;
for (; *haystack ; haystack++)
{
	for (hay = haystack, nee = needle
		; *hay && *nee && (*hay == *nee)
		; hay++, nee++)
		;
		if (*nee == '\0')
		{
			return (haystack);

		}
}
return (NULL);
}
