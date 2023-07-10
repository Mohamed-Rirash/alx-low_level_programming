#include "main.h"
/**
 * strtow - a function that splits a string into words.
 * @s: pointer to string to be splitted
 *
 * Return: NULL if str is NULL or empty,
 * else a pointer to an array of string pointers
 */

int word_count(char *s);
char **order_words(char *str, int len);

char **strtow(char *str)
{
	int len = 0;
	char **s;

	if (str == NULL)
		return (NULL);
	len = word_count(str);
	if (len == 0)
		return (NULL);
	s = order_words(str, len);
	return (s);
}

/**
 * word_count - count words in string
 * @s: string to count
 *
 * Return: integer, number of words
 */

int word_count(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
			len += 1;
	}
	return (len);
}

/**
 * order_words - create an array of pointers to strings
 * @str: pointer to string
 * @len: number of words
 *
 * Return: pointer to an array of string pointers
 */

char **order_words(char *str, int len)
{
	int i = 0, j = 0, x = 0, y = 0;
	char **s;

	s = malloc((len + 1) * sizeof(*s));
	if (s == NULL)
		return (NULL);
	i = 0;
	for (x = 0; x < len; x++)
	{
		for ( ; str[i] != '\0'; )
		{
			if (str[i] != ' ')
			{
				j = 0;
				while (str[i + j] != '\0' && str[i + j] != ' ')
					j++;
				s[x] = malloc(j * sizeof(**s) + 1);
				if (s[x] == NULL)
					return (NULL);
				for (y = 0; y < j; y++)
					s[x][y] = str[i + y];
				s[x][y] = '\0';
			}
			if (y > 0)
			{
				i += y + 1, y = 0;
				break;
			}
			else
			{
				i++;
			}
		}
	}
	s[x] = NULL;
	return (s);
}

