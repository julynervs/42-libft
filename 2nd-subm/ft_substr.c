/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurobert <jurobert@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:33:19 by jurobert          #+#    #+#             */
/*   Updated: 2021/10/05 12:12:23 by jurobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	str_len;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (str_len <= len)
		len = str_len - start;
	else if (start + len >= str_len)
		return (ft_strdup(""));
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	else
		ft_strlcpy(substr, str + start, len + 1);
	return (substr);
}
