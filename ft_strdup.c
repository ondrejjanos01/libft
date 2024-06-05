/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojanos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:38:21 by ojanos            #+#    #+#             */
/*   Updated: 2024/05/21 12:50:04 by ojanos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	if (s == NULL)
		return (NULL);
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int main(void)
{
    const char *str = "Hello, World!";
    char *dup_str = ft_strdup(str);
    if (dup_str != NULL)
    {
        printf("Original string: %s\n", str);
        printf("Duplicate string: %s\n", dup_str);
        free(dup_str); // Remember to free the duplicated string after use
    }
    else
    {
        printf("Memory allocation failed!\n");
    }
    return 0;
}*/
