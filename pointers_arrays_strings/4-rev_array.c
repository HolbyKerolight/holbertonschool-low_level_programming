/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a : le tableau
 * @n : la taille du tableau
 *
 * Return: Le tableau inversé
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
