#include "main.h"

/**
 * reverse_string - reverses a string
 * @str: string to reverse
 * Return: pointer to string
 */

char *reverse_string(char *str)
{
	int len, head;
	char tmp;
	char *dest;

	for (len = 0; str[len]; len++);

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	_memcpy(dest, s, len);
	for (head = 0; head < len; head++; len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}

	return (dest);
}
