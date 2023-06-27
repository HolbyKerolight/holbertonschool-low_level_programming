/**
 * swap_int - function that swaps the values of two integers
 *
 * @a : pointer to an int
 *@b : pointeur to an int
 * return : void
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
