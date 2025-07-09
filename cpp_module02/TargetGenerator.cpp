/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oprosvir <oprosvir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 14:52:13 by oprosvir          #+#    #+#             */
/*   Updated: 2025/07/09 16:07:30 by oprosvir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {
    for (std::map<std::string, ATarget*>::iterator it = targets.begin(); it != targets.end(); ++it)
        delete it->second;
    targets.clear();
}

void TargetGenerator::learnTargetType(ATarget* target) {
    if (target)
        targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(const std::string& type) {
    std::map<std::string, ATarget*>::iterator it = targets.find(type);
    if (it != targets.end()) {
        delete it->second;
        targets.erase(it);
    }
}

ATarget* TargetGenerator::createTarget(const std::string& type) {
    std::map<std::string, ATarget*>::iterator it = targets.find(type);
    if (it != targets.end()) {
        return it->second->clone();
    }
    return NULL;
}