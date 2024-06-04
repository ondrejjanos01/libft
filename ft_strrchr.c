/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:12:05 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 11:26:06 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr (const char *s, int c)
{
	int i;

	i= ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while(i >= 0)
	{
		if (s[i] == c)
			return ((char *)s+i);
		i--;
	}
	return (NULL);
}

/*int main()
{
    const char *str = "Hello, World!";
    int character = 'o';

    char *result = ft_strrchr(str, character);
    if (result != NULL)
        printf("Last occurrence of '%c' in \"%s\" is at index %ld.\n", character, str, result - str);
    else
        printf("Character '%c' not found in \"%s\".\n", character, str);

    return 0;
}*/