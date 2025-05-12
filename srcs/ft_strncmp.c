/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saibelab <saibelab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:16:55 by saibelab          #+#    #+#             */
/*   Updated: 2025/04/27 15:18:11 by saibelab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i] != '\0') && i < n - 1)
	{
		while (s1[i] == s2[i])
			i++;
		if (n > 0)
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int main()
{
	printf("%d",ft_strncmp("yup", "yop", 1));
}
*/
