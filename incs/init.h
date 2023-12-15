/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:07:29 by bguyot            #+#    #+#             */
/*   Updated: 2023/12/15 11:16:27 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

/**
 *	@brief	Allocate the data needed for 42sh
 *	@param	data	A pointer to the data structure
 */
void	init(t_42sh *data);

/**
 *	@brief	Deallocate the data needed for 42sh
 *	@param	data	A pointer to the data structure
 */
void	tini(t_42sh *data);
