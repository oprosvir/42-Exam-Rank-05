/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:51:12 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/11 13:33:08 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

class Polymorph : public ASpell {
public:
    Polymorph();
    ~Polymorph();

    virtual ASpell* clone() const;
};
