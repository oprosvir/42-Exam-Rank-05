/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:51:42 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 15:11:30 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget {
public:
    BrickWall();
    virtual ~BrickWall();

    virtual BrickWall* clone() const;
};

#endif