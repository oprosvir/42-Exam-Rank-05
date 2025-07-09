/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:50:38 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 15:08:07 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

// Name: "Fireball", Effects: "burnt to a crisp"
Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {}
Fireball::~Fireball() {}

// return a pointer to a new Fireball object
Fireball* Fireball::clone() const {
    return new Fireball;
}