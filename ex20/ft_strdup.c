/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsaintho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:07:07 by jsaintho          #+#    #+#             */
/*   Updated: 2024/05/13 14:07:20 by jsaintho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *s)
{
	int		i;
	char	*heap_s;

	i = 0;
	while (s[i] != '\0')
		i++;
	heap_s = (char *)malloc((i + 1) * sizeof(char));
	if (!heap_s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		heap_s[i] = s[i];
		i++;
	}
	heap_s[i] = '\0';
	return (heap_s);
}

/*
int main()
{
	char	*s = ft_strdup("bonjour");
	printf("%c", s[12]);
	printf("%s\n", s);
	// free(s);
	return 0;
}*/
