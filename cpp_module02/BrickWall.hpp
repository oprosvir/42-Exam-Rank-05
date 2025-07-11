/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:51:42 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/11 13:29:09 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"

class BrickWall : public ATarget {
public:
    BrickWall();
    ~BrickWall();

    virtual ATarget* clone() const;
};
