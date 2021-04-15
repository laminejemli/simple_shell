#include "shell.h"
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
