/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saibelab <saibelab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:55:32 by saibelab          #+#    #+#             */
/*   Updated: 2025/04/29 16:20:40 by saibelab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t static	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	j = i;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < size)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
