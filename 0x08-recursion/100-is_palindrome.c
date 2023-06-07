#include "main.h"

int get_stringlen(char *s);
int check_if_palindrome(char *s, int len, int index);
int is_palindrome(char *s);


/**
 * get_stringlen - function that returns 1 if a string
 * is a palindrome and 0 if not
 *
 * @s: a string
 *
 *
 * Return: (1) on success
 *
 */

int get_stringlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += get_stringlen(s + len);
	}

	return (len);
}

/**
 * check_if_palindrome - function to check if a string is a palindrome.
 *
 * @s: string
 *
 * @len: The length of the string
 *
 * @index: index of the string
 *
 * Return: if the string is a palindrome -- 1.
 * if the string is not a palindrome -- 0.
 */
int check_if_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_if_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - function that checks if a string is a palindrome or not.
 * @s: string to be checked.
 *
 * Return: if the string is a palindrome -- 1.
 * if the string is not a palindrome -- 0.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = get_stringlen(s);

	if (!(*s))
		return (1);

	return (check_if_palindrome(s, len, index));
}
