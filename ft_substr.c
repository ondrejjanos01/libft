/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 09:13:30 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/24 09:20:56 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

/*int main()
{
    const char *s = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(s, start, len);
    if (substring != NULL)
    {
        printf("Substring: \"%s\"\n", substring);
        free(substring);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
