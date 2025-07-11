/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:50:45 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/10 14:31:10 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::~ASpell() {}

ASpell::ASpell(const std::string& name, const std::string& effects) : 
        name(name), effects(effects) {}
        
ASpell::ASpell(const ASpell& other) : name(other.name), effects(other.effects) {}

ASpell& ASpell::operator=(const ASpell& other) {
    if (this != &other) {
        name = other.name;
        effects = other.effects;
    }
    return *this;
}

const std::string& ASpell::getName() const {
    return this->name;
}

const std::string& ASpell::getEffects() const {
    return this->effects;
}

void ASpell::launch(const ATarget& target) const {
    // call the getHitBySpell of the passed object, passing the
    // current instance as parameter
    target.getHitBySpell(*this);
}