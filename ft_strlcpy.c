/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:34:07 by sjoukni           #+#    #+#             */
/*   Updated: 2024/10/24 14:58:16 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include <stdio.h>

static void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	ptr_dst = dst;
	ptr_src = src;
    i = 0;
	if (ptr_dst == ptr_src || n == 0)
		return dst;

	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return dst;
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t 	src_len = strlen(src);
    size_t	copy_len;

    if (dstsize > 0)
    {
        if (src_len >= dstsize)
            copy_len = dstsize - 1;
        else
            copy_len = src_len;

        ft_memcpy(dst, src, copy_len);
        dst[copy_len] = '\0'; 
    }
    return src_len;
}

int main()
{
    char src[] = "abc";
    char dst[10];
    //size_t s; 

    //s = ft_strlcpy(dst, src, -1);
	ft_strlcpy(dst, src, sizeof(dst));
    printf("Copied string: %s\n", dst);
	printf("%c", dst[3]);
    //printf("Length of src: %zu\n", s);
    //printf("Size of src: %lu\n", sizeof(src));
	return 0;
}
