/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhussene <nhussene@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:37:31 by nhussene          #+#    #+#             */
/*   Updated: 2026/11/16 11:32:21 by nhussene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function allows you to test whether a character is alphabetical or not. 
A character will be considered alphabetical if it is 
lowercase letters or capital letters.
*/

int	ft_isalpha(int c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}
