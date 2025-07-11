/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:50:36 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/10 14:32:50 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) 
    : name(name), title(title) {
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    for (std::map<std::string, ASpell*>::iterator it = spells.begin(); it != spells.end(); ++it) {
        delete it->second;
    }
    spells.clear();
    std::cout << name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const {
    return this->name;
}

const std::string& Warlock::getTitle() const {
    return this->title;
}

void Warlock::setTitle(const std::string& newTitle) {
    this->title = newTitle;
}

//<NAME>: I am <NAME>, <TITLE>!
void Warlock::introduce() const {
    std::cout   << this->name << ": I am " << this->name << ", " 
                << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
    if (spell) {
        spells[spell->getName()] = spell->clone();
    }
}

void Warlock::forgetSpell(const std::string& spell) {
    std::map<std::string, ASpell*>::iterator it = spells.find(spell);
    if (it != spells.end()) {
        delete it->second;
        spells.erase(it);
    }
}

void Warlock::launchSpell(const std::string& spell, const ATarget& target) {
    std::map<std::string, ASpell*>::iterator it = spells.find(spell);
    if (it != spells.end()) {
        it->second->launch(target);
    }
}