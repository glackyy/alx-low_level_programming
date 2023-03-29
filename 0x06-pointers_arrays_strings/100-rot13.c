#include "main.h"
/**
 * rot13 - Entry Function
 * @str: char
 * Return: res (SUCCESS)
 */
char *rot13(char *str)
{
char *res = str;
int i, j;
char initialdata[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char dataRot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0 ; str[i] != '\0' ; i++)
{
	for (j = 0 ; j < 52 ; j++)
	{
		if (str[i] == initialdata[j])
		{
			str[i] = dataRot[j];
			break;
		}
	}
}
return (res);
}
