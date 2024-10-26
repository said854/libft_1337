/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjoukni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:05:14 by sjoukni           #+#    #+#             */
/*   Updated: 2024/10/26 12:05:58 by sjoukni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char *ptr;
    int l;
    int i;

    if(s == NULL)
        return 0;
    ptr = (char *)malloc(len);
    if (ptr == NULL)
        return 0;
    i = 0;    
    memcpy(ptr, s + start, len);
    return ptr;  
}
