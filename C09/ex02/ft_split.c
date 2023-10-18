/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gharazka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:56:48 by gharazka          #+#    #+#             */
/*   Updated: 2023/09/28 16:04:43 by gharazka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_for_separated(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_for_separated(str[i], charset))
			i++;
		while (str[i] && !check_for_separated(str[i], charset))
			i++;
		count++;
	}
	if (count == 0)
		count++;
	return (count);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (check_for_separated(str[i], charset))
			break ;
		i++;
	}
	return (i);
}

char	*make_word(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (ft_strlen(str, charset) + 1));
	while (str[i] && !check_for_separated(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	char	**words;

	i = 0;
	k = 0;
	words = (char **)malloc(sizeof(char *) * count_words(str, charset) + 1);
	if (str[i] == 0)
		return (words);
	while (str[i])
	{
		if (!check_for_separated(str[i], charset))
		{
			words[k] = make_word(&str[i], charset);
			k++;
			while (str[i] && !check_for_separated(str[i], charset))
				i++;
		}
		else
			i++;
	}
	words[k] = 0;
	return (words);
}

/*
#include <stdio.h>
int	main(void)
{
	char **words;
	int	i;
	i = 0;
	words = ft_split("hello", "");
	while(words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
}
*/
