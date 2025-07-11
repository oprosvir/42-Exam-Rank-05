/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:50:45 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/11 13:30:43 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

class Fireball : public ASpell {
public:
    Fireball();
    ~Fireball();

    virtual ASpell* clone() const;
};
