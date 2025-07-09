/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:50:45 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 15:05:28 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include "ASpell.hpp"

class Fireball : public ASpell {
public:
    Fireball();
    virtual ~Fireball();

    virtual Fireball* clone() const;
};

#endif