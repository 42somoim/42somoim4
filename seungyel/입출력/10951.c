/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10951.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungyel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 02:10:07 by seungyel          #+#    #+#             */
/*   Updated: 2020/10/13 02:38:53 by seungyel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main()
{
	int a;
	int b;

	while (scanf("%d %d", &a, &b) != EOF)
	{
		printf("%d\n", a+b);
	}
	return (0);
}
