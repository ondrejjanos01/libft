#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    char *dup_str = ft_strdup(str);

    if (dup_str) {
        printf("Duplicated string: %s\n", dup_str);
        free(dup_str);
    } else {
        printf("Failed to duplicate string\n");
    }
    return 0;
}
