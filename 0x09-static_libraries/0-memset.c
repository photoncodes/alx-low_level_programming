/**
 * _memset -fills memory with a constant byte
 * @s: pointer of first address to manipulate
 * @b: constant byte to be written in memory
 * @n: first n elements are filled with @b
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
