/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:51:16 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 12:54:50 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>

class ATarget {
protected:
    std::string type;

public:
    ATarget();
    virtual ~ATarget();
    ATarget(const ATarget& other);
    ATarget& operator=(const ATarget& other);

    ATarget(const std::string& type);

    const std::string& getType() const;
    
    virtual ATarget* clone() const = 0;
};

#endif
