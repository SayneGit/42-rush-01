/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajolivet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 16:28:27 by ajolivet          #+#    #+#             */
/*   Updated: 2021/09/11 18:44:10 by ajolivet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!(str[i] >= '1' && str[i] <= '4'))
            return (0);
        i++;
    }
    return (1);
}
void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}


char    *ft_convert(char *str, char *out)
{
    int len;
    int i;
    int j;

    j = 0;
    i = 0;
    len = ft_strlen(str);

    if (len < 31)
        ft_putstr("Error");
    while (str[i])
    {
        if (str[i] == ' ')
            i++;
        if ((str[i] >= '1' && str[i] <= '4'))
        {
            out[j] = str[i];
            j++;
        }
        i++;
    }
    out[j] = '\0';
    return (out);
}
int main()
{
    char out[16];
    char str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
    ft_convert(str, out);
    ft_putstr(out);
}
