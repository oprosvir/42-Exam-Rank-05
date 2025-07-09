/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:51:04 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 15:08:49 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

//Name: "Polymorph", Effects: "turned into a critter"
Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {}
Polymorph::~Polymorph() {}

// return a pointer to a new Polymorph object
Polymorph* Polymorph::clone() const {
    return new Polymorph;
}