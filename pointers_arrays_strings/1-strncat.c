/**
 * _strncat - function that concatenates two strings
 *
 * @dest : une chaine de caractere
 * @src : deuxieme chaine
 * @n : bytes from src
 *
 * Return: la concatenation des deux chaines
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}