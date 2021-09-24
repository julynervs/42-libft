/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 12:56:41 by jurobert          #+#    #+#             */
/*   Updated: 2021/09/24 13:27:00 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_wordfill(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	start_char;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start_char = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			tab[n] = ft_substr(s, start_char, (i - start_char));
			n++;
		}
		else
			i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	n_words;

	if (!s)
		return (0);
	n_words = ft_wordcount(s, c);
	tab = ft_calloc(n_words + 1, sizeof(char *));
	if (!tab)
		return (0);
	tab = ft_wordfill(s, c, tab);
	return (tab);
}
