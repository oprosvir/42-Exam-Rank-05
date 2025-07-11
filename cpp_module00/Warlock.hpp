/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 00:51:20 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/11 13:25:01 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Warlock {
private:
    std::string name;
    std::string title;

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
};
