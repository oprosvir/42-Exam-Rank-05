/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:50:36 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 15:59:05 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title) 
    : name(name), title(title) {
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << this->name << ": My job here is done!" << std::endl;
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

void Warlock::introduce() const {
    //<NAME>: I am <NAME>, <TITLE>!
    std::cout   << this->name << ": I am " << this->name << ", " 
                << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
    book.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string& spell) {
    book.forgetSpell(spell);
}

void Warlock::launchSpell(const std::string& spell, const ATarget& target) {
    ASpell* name = book.createSpell(spell);
    if (name)
        name->launch(target);
    delete name;
}