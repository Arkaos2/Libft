/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saibelab <saibelab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:04:18 by saibelab          #+#    #+#             */
/*   Updated: 2025/04/29 14:48:50 by saibelab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*tab;
	size_t	i;

	if (size == 0 || nmemb == 0)
	total = nmemb * size;
	tab = malloc(total);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
