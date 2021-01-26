/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceccentr <ceccentr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 13:39:34 by ceccentr          #+#    #+#             */
/*   Updated: 2020/06/06 13:46:01 by ceccentr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char			*ft_strchr(const char *str, int ch)
{
	int			i;

	i = 0;
	while (((unsigned char*)str)[i] != '\0')
	{
		if (((unsigned char*)str)[i] == (((unsigned char)ch)))
			return (((char*)str) + i);
		i++;
	}
	if (((unsigned char*)str)[i] == (((unsigned char)ch)))
		return (((char*)str) + i);
	return (NULL);
}

char			*ft_strjoin(char *s1, char *s2, int flag)
{
	size_t		size;
	size_t		i;
	size_t		j;
	char		*array;

	if (s1 && s2)
	{
		size = ft_strlen(s1) + ft_strlen(s2);
		if (!(array = (char *)malloc(sizeof(char) * (size + 1))))
			return (NULL);
		i = 0;
		j = 0;
		while (s1[j])
			array[i++] = s1[j++];
		j = 0;
		while (s2[j])
			array[i++] = s2[j++];
		array[i] = '\0';
		if (flag && s1)
			free(s1);
		return (array);
	}
	return (NULL);
}

char			*ft_strdup(const char *str)
{
	int			i;
	int			j;
	char		*dst;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	dst = (char*)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (NULL);
	while (j < i)
	{
		dst[j] = str[j];
		j++;
	}
	dst[j] = str[j];
	return (dst);
}

size_t			ft_strlen(const char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*dst;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (start > i)
		return (ft_strdup(""));
	if ((i - start) < len)
		len = i - start;
	if (!(dst = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
