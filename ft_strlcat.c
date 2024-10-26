/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:10:21 by sjoukni           #+#    #+#             */
/*   Updated: 2024/10/24 15:10:24 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len = strlen(src);
    size_t dst_len = strlen(dst);
    size_t i;

    // If dstsize is smaller than or equal to dst_len
    if (dstsize <= dst_len)
        return (dstsize + src_len);

    // Start appending src to dst, but respect the size limits.
    i = 0;
    while (dst_len + i < dstsize - 1 && src[i]) {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}

int main()
{
    char src[] = "world";
    char dst[] = "hello";
    size_t result;

    result = ft_strlcat(dst, src, 3);
    printf("Concatenated string: %s\n", dst);
    printf("Total length of attempted concatenation: %zu\n", result);

    return 0;
}
