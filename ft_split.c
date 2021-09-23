/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 23:32:37 by jurobert          #+#    #+#             */
/*   Updated: 2021/09/09 13:17:40 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fillwords(char const *s, char c, char **str);
static size_t	ft_countwords(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (0);
	str = calloc(ft_countwords(s, c) + 1, sizeof(char *));
	if (!str)
		return (0);
	ft_fillwords(s, c, str);
	return (str);
}

static size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	n_words;

	i = 0;
	n_words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			n_words++;
		}
	}
	return (n_words);
}

static void	ft_fillwords(char const *s, char c, size_t n_words, char **str)
{
	char	*start;
	size_t	n;
	size_t	len_word;

	n = 0;
	start = (char *)s;
	while (n < n_words)
	{
		if (*start == c)
			start++;
		else
		{
			len_word = 0;
			while (*start != c && *start != '\0')
			{
				start++;
				len_word++;
			}
			str[n] = ft_substr(start, 0, len_word);
			start += len_word;
			n++;
		}
	}
}
