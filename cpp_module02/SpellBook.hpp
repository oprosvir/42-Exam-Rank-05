/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:51:59 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/11 13:33:20 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <map>
#include <string>
#include "ASpell.hpp"

class SpellBook {
private:
    std::map<std::string, ASpell*> spells;

    SpellBook(const SpellBook& other);
    SpellBook& operator=(const SpellBook& other);    
    
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell* spell);
    void forgetSpell(const std::string& spell);
    ASpell* createSpell(const std::string& spell);
};
