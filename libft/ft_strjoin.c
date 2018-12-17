/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strjoin.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: awhite <marvin@42.fr>						+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2018/10/26 13:27:22 by awhite			   #+#	  #+#			  */
/*	 Updated: 2018/10/26 13:36:15 by awhite			  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int i;
	int j;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)));
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
		str[i++] = s2[j++];
	return (str);
}
