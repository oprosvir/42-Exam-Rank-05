/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:50:40 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 12:43:22 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>

class ASpell {
protected:
    std::string name;
    std::string effects;
    
public:
    ASpell();
    ASpell(const ASpell& other);
    ASpell& operator=(const ASpell& other);
    virtual ~ASpell();

    ASpell(const std::string& name, const std::string& effects);

    const std::string& getName() const;
    const std::string& getEffects() const;
    
    virtual ASpell* clone() const = 0;
};

#endif