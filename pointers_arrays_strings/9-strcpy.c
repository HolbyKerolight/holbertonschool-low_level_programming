/**
 * _strcpy - function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest : pointer to char
 * @src : pointer to char
 *
 * Return: char
 */
#include <stdio.h>
#include <string.h>

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
