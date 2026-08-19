/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to the array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;
	int j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		/* Swap elements */
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		/* Move the end pointer backwards */
		j--;
	}
}

