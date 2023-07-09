/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltinto <aaltinto@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:43:34 by aaltinto          #+#    #+#             */
/*   Updated: 2023/04/09 15:44:08 by aaltinto         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		f = 0;
		while (str[i + f] == to_find[f] && str[i])
		{
			if (to_find[f + 1] == '\0')
				return (&str[i]);
			f++;
		}
		i++;
	}
	return (0);
}
