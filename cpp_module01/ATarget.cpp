/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:51:09 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 13:19:47 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"
#include <iostream>

ATarget::ATarget() {}
ATarget::~ATarget() {}

ATarget::ATarget(const ATarget& other) : type(other.type) {}
ATarget::ATarget(const std::string& type) : type(type) {}

ATarget& ATarget::operator=(const ATarget& other) {
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

const std::string& ATarget::getType() const {
    return this->type;
}

void ATarget::getHitBySpell(const ASpell& spell) const {
    // <TYPE> has been <EFFECTS>!
    std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
}