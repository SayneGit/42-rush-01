/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 11:48:03 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/12 11:48:06 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '1' && str[i] <= '4'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_parse(char *str, char *out)
{
	int	len;
	int	i;
	int	j;

	j = 0;
	i = 0;
	len = ft_strlen(str);
	if (len != 31)
		ft_putstr("Parsing error");
	else
	{
		while (str[i])
		{
			if (str[i] == ' ')
				i++;
			if (str[i] >= '1' && str[i] <= '4')
			{
				out[j] = str[i];
				j++;
			}
			i++;
		}
	}
	out[j] = '\0';
	return (out);
}
