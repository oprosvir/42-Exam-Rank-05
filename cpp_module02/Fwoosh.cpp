/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:51:35 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/11 13:31:36 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

// set the name to "Fwoosh" and the effects to "fwooshed"
Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed") {}
Fwoosh::~Fwoosh() {}

// return a pointer to a new Fwoosh object
ASpell* Fwoosh::clone() const {
    return new Fwoosh;
}