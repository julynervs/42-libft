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

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = calloc(ft_countwords(s, c) + 1, sizeof(char *));
	if (!s || !str)
		return (0);
	ft_fillwords(s, c, str);
	return (str);
}

static void	ft_fillwords(char const *s, char c, char **str)
{
	size_t	i;
	size_t	letter;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				letter++;
			}
			str[letter++] = ft_calloc(len + 1, sizeof(char));
			ft_strlcpy(str[letter], &s[i - letter], letter + 1);
		}
	}
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
				n_words++;
			}
		}
	}
	return (n_words);
}
