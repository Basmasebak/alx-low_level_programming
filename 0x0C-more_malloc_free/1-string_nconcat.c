#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	len1 = (s1 == NULL) ? 0 : strlen(s1);
len2 = (s2 == NULL) ? 0 : strlen(s2);

if (n < len2)
	s = malloc(sizeof(char) * (len1 + n + 1));
else
	s = malloc(sizeof(char) * (len1 + len2 + 1));

if (!s)
	return (NULL);

if (s1)
	strncpy(s, s1, len1);

if (s2)
	strncpy(s + len1, s2, n);

s[len1 + n] = '\0';

return (s);
}
