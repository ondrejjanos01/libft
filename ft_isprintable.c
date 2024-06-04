/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprintable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:34:51 by ojanos            #+#    #+#             */
/*   Updated: 2024/03/07 10:57:58 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 127))
		{
			i++;
		}
		str++;
	}
	if (i > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/*int main ()
{
	int result;
	char c[20] = "jsja1nba	baba";

	result = ft_str_is_printable(c);
	printf("%d", result);
}*/
