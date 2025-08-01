/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:51:20 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/11 13:33:36 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
private:
    std::string name;
    std::string title;
    // std::map<std::string, ASpell*> spells;
    SpellBook book;

    Warlock();
    Warlock(const Warlock& other);
    Warlock& operator=(const Warlock& other);
    
public:
    Warlock(const std::string& name, const std::string& title);
    ~Warlock();

    const std::string& getName() const;
    const std::string& getTitle() const;

    void setTitle(const std::string& newTitle);
    void introduce() const;

    void learnSpell(ASpell* spell);
    void forgetSpell(const std::string& spell);
    void launchSpell(const std::string& spell, const ATarget& target);
};
