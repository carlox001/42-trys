/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czerini <czerini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:00:16 by czerini           #+#    #+#             */
/*   Updated: 2024/03/10 19:13:52 by czerini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_b(char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_calloc_b(size_t nmemb, size_t size)
{
	char	*arr;
	size_t	i;

	arr = (char *)malloc(nmemb * size);
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		arr[i] = '\0';
		i++;
	}
	return (arr);
}

char	*ft_strchr_b(char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return (&s[i]);
	return (NULL);
}

char	*ft_substr_b(char *s, unsigned int start, char stop_char)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (s == NULL || s[0] == '\0')
		return (NULL);
	len = 0;
	while (s[len] != stop_char && s[len] != '\0')
		len++;
	str = (char *)ft_calloc_b(((len - start) + 2), sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s && s[start] != stop_char && s[start] != '\0')
		str[i++] = s[start++];
	if (s && s[start] == stop_char)
		str[i++] = '\n';
	return (str);
}

void	*ft_memcpy_b(char *dest, char *src, size_t n)
{
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
