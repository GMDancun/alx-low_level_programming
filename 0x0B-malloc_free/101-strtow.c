#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count_all_words - calculates number of words
 * @sw: string
 *
 * Return: int
 */
int count_all_words(char *sw)
{
	int list, wordcount;

	list = 0, wordcount = 0;
	if (*(sw + list) == ' ')
		list++;
	while (*(sw + list))
	{
		if (*(sw + list) == ' ' && *(sw + list - 1) != ' ')
			wordcount++;
		if (*(sw + list) != ' '  && *(sw + list + 1) == 0)
			wordcount++;
		list++;
	}
	return (wordcount);
}
/**
 * blank_space - whitespaces
 * @st: string
 *
 * Return: Pointer
 */
char *blank_space(char *st)
{
	while (*st == ' ')
		st++;
	return (st);
}

/**
 * strtow - splits the string to words
 * @str: string
 *
 * Return: Double Pointer
 */
char **strtow(char *str)
{
	char **ss, *tss;
	int l, l2, wc, i, j, fr, k;

	if (str == NULL || *str == 0)
		return (0);
	fr = 0;
	wc = count_all_words(str);
	if (wc == 0)
		return (0);
	ss = malloc((wc + 1) * sizeof(char *));
	if (ss == 0)
		return (0);
	tss = blank_space(str);
	for (i = 0; i < wc; i++)
	{
		l = 0;
		while (*(tss + l) != ' ' && *(tss + l) != 0)
			l++;
		ss[i] = malloc((l + 1) * sizeof(char));
		if (ss[i] == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0, l2 = 0; l2 < l; l2++, j++)
			ss[i][j] = *(tss + l2);
		ss[i][j] = '\0';
		tss = blank_space(tss + l);
	}
	ss[i] = NULL;
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
			free(ss[k]);
		free(ss);
	}
	return (ss);
}
