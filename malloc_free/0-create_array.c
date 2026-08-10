/**
 * create_array - Creates an array of chars initialized with a specific char
 * @size: Size of the array to create
 * @c: Character to initialize the array with
 *
 * Return: Pointer to the array, or NULL if size is 0 or allocation fails
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    /* Check for zero size as per requirements */
    if (size == 0)
        return (NULL);

    /* Allocate memory using malloc */
    arr = malloc(sizeof(char) * size);
    
    /* Check if malloc failed */
    if (arr == NULL)
        return (NULL);

    /* Initialize the array with character c */
    i = 0;
    while (i < size)
    {
        arr[i] = c;
        i++;
    }

    return (arr);
}
