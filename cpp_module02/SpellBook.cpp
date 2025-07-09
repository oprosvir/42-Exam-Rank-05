/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:51:53 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 15:47:00 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {
    for (std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); ++it)
        delete it->second;
    spells.clear();
}

void SpellBook::learnSpell(ASpell* spell) {
    if (spell)
        spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const std::string& spell) {
    std::map<std::string, ASpell*>::iterator it = spells.find(spell);
    if (it != spells.end()) {
        delete it->second;
        spells.erase(it);
    }
}

ASpell* SpellBook::createSpell(const std::string& spell) {
    std::map<std::string, ASpell*>::iterator it = spells.find(spell);
    if (it != spells.end()) {
        return it->second->clone();
    }
    return NULL;
}