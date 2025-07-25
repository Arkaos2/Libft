/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saibelab <saibelab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:04:30 by saibelab          #+#    #+#             */
/*   Updated: 2025/05/16 12:29:59 by saibelab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int str)
{
	if (!((str >= 48 && str <= 57)
			|| (str >= 'a' && str <= 'z')
			|| (str >= 'A' && str <= 'Z')))
		return (0);
	else
		return (1);
}
