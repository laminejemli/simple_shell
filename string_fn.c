#include "shell.h"
/**
 * _puts - writes the string
 * @str: The character to print
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen - returns the length of a string
 * @s: pointer to char
 * Return: Always return length of @s
 **/
int _strlen(const char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (s && s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strlen - it gives the length of a string
 * @s: pointer to the string
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: pointer to a string
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	int i, l;
	char *new;

	if (str == '\0')
	{
		return (NULL);
	}
	for (l = 0; str[l] != '\0';)
	{
		l++;
	}
	new = malloc(sizeof(char) * l + 1);
	if (new == '\0')
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		new[i] = str[i];
	}
	new[l] = str[l];
	return (new);
}
/**
 * _strdup -  function that returns a pointer to a newly allocated space in
 * memory which contains a duplicate of the string given as a parameter.
 * @str: pointer to char
 * Return: return pointer if memory allocation for succeed otherwise NULL
 **/
char *_strdup(const char *str)
{
	unsigned int i = 0, b = 0;
	char *p = NULL;

	if (str == NULL)
		return (NULL);
	i = _strlen(str);
	if (i != 0)
		i += 1;
	p = malloc(i * sizeof(str));
	if (p == NULL)
		return (NULL);
	for (b = 0; b < i; b++)
		p[b] = str[b];
	p[b + 1] = '\0';
	return (p);
}
/**
 * str_concat - function that concatenates two strings
 * @s1: pointer of char
 * @s2: pointer of char
 * Return: two strings concatenated
 **/
char *str_concat(const char *s1, const char *s2)
{
	unsigned int i = 0, b = 0, c = 0, d = 0;
	char *p = NULL;

	if (s1 != NULL)
	{
		while (s1 && s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2 && s2[b] != '\0')
			b++;
	}
	p = malloc((i + b + 1) * sizeof(s1));
	if (p == NULL)
		return (NULL);
	for (c = 0; c < i; c++)
		p[c] = s1[c];
	for (d = 0; d < b; d++)
		p[c + d] = s2[d];
	p[(c + d) + 1] = '\0';
	return (p);
}
/**
 * _calloc - function that allocates memory for an array with malloc
 * @nmemb: number of elements
 * @size: size of type
 * Return: pointer
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		exit(-1);
	return (p);
}
/**
 * free_grid - function that frees a 2 dimensional grid previously created by
 * the alloc_grid function.
 * @grid: address of the two dimensional grid
 **/
void free_grid(char **grid)
{
	int h = 0;

	if (grid == NULL)
		return;

	for (; grid[h]; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
