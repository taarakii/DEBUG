/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destructor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 20:36:04 by taaraki           #+#    #+#             */
/*   Updated: 2023/05/03 01:09:32 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdlib.h>

__attribute__((destructor))
void	destructor(void)
{
	system("echo");
	system("leaks -q push_swap | awk 'NR == 3' | cut -d ' ' -f 3-4");
}
