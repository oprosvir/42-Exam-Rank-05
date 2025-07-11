/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:51:54 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/11 13:31:49 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ASpell.hpp"

class Fwoosh : public ASpell {
public:
    Fwoosh();
    ~Fwoosh();

    virtual ASpell* clone() const;
};
