/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saibelab <saibelab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:56:24 by saibelab          #+#    #+#             */
/*   Updated: 2025/04/25 16:19:20 by saibelab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	value;
	int	neg;

	i = 0;
	value = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while ((str[i] >= 'a' && str[i] <= 'z' )
		|| (str[i] >= 'A' && str[i] <= 'Z'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value *= 10;
		value += str[i] - '0';
		i++;
	}
	return (value * neg);
}
/*
int	main()
{
	printf("%d",ft_atoi("++--++-+-+-423"));
}
*/
