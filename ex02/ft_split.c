/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lionelulm <lionelulm@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 01:38:03 by lionelulm         #+#    #+#             */
/*   Updated: 2024/08/03 02:13:42 by lionelulm        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checkforsep(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	wordcount(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (checkforsep(str[i], sep) == 0)
		{
			count++;
			while (str[i] && checkforsep(str[i], sep) == 0)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	*splitting(char *str, char *sep)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	while (str[i] && checkforsep(str[i], sep) == 0)
		i++;
	result = malloc(sizeof(char) * (i + 1));
	if (result == NULL)
		return (NULL);
	j = 0;
	while (str[j] && checkforsep(str[j], sep) == 0)
	{
		result[j] = str[j];
		j++;
	}
	result[j] = '\0';
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char **result;

	i = 0;
	j = 0;
	if (str == NULL || charset == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (wordcount(str, charset) + 1));
	if (result == NULL)
		return (NULL);
	while (str[i])
	{
		if (checkforsep(str[i], charset) == 0)
		{
			result[j] = splitting(&str[i], charset);
			while (str[i] && checkforsep(str[i], charset) == 0)
				i++;
			j++;
		}
		else
			i++;
	}
	result[j] = 0;
	return (result);
}

// ----------------------------------------

#include <stdio.h>

int	main(void)
{
	char	*str = "Salut a tous et a toutes hihi haha houhou";
	char	*sep = "a";
	char	**words = ft_split(str, sep);
	int		i = 0;

	printf("Before: %s\nAfter: \n", str);
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	free(words);
}
