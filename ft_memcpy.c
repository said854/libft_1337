/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:42:39 by sjoukni           #+#    #+#             */
/*   Updated: 2024/10/23 09:55:06 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ptr_dst;
	const unsigned char	*ptr_src;

	ptr_dst = dst;
	ptr_src = src;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}
