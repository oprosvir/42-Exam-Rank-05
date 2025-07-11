/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:52:19 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/11 13:29:47 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ATarget.hpp"

class Dummy : public ATarget {
public:
    Dummy();
    ~Dummy();

    virtual ATarget* clone() const;
};
