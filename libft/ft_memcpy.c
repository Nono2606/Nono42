/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:25:35 by nhussene          #+#    #+#             *//*   Updated: 2026/11/16 11:46:49 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This function allows you to copy a block of memory specified 
by the parameter source, and whose size is specified via the parameter size, 
in a new location designated by the parameter destination.*/
/*In case of overlap of the two blocks of memory 
( sourceand destination) the behaviour of 
 the function memcpy is not Not guaranteed.*/

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	const unsigned char	*from;
	unsigned char		*to;

	if (!dest || !src)
		return (dest);
	from = (const unsigned char *)src;
	to = (unsigned char *)dest;
	while (count--)
		*to++ = *from++;
	return (dest);
}
