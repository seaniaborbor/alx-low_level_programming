#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to beginning of located substring
 * or NULL, if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != 0)
	{
		if (haystack[i] == needle[0])
		{
			x = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
