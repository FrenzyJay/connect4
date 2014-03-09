/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvincent </var/mail/jvincent>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/31 09:53:28 by jvincent          #+#    #+#             */
/*   Updated: 2013/12/07 11:26:28 by jvincent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	int	kount;

	kount = 0;
	if (dest && src)
	{
		while (src[kount])
		{
			dest[kount] = src[kount];
			kount = kount + 1;
		}
		dest[kount] = '\0';
	}
	return (dest);
}

