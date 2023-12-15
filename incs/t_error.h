/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_error.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:41:06 by bguyot            #+#    #+#             */
/*   Updated: 2023/12/15 10:41:23 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <t_code.h>

typedef struct	s_error
{
	t_code	code;
	int		fatal;
	char	message[128];
}	t_error;
