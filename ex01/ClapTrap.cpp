/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 06:59:44 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/23 04:57:20 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) {
  if (name.empty())
    this->name = "Default";
  else
    this->name = name;
  this->hitPoints = 10;
  this->energyPoints = 10;
  this->attackDamage = 0;
  std::cout << "Claptrap " << this->name << " created !" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "Claptrap destroyed !" << std::endl; }

void ClapTrap::attack(const std::string &target) {

  if (energyPoints == 0)
    std::cout << "Claptrap " << this->name << "has no point" << std::endl;
  if (hitPoints == 2)
    beRepaired(8);
  if (hitPoints > 2 && energyPoints != 0)
    std::cout << "ClapTrap " << this->name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!"
              << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (amount > 1) {
    std::cout << "Tu veux tapper trop fort" << std::endl;
    return;
  }
  std::cout << "ClapTrap " << "take" << amount << " points of damage"
            << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

  if (amount > 10) {
    std::cout << "Tu demandes trop de soins" << std::endl;
    return;
  }
  if (energyPoints == 0)
    std::cout << "Claptrap" << this->name << " has no point" << std::endl;
  energyPoints--;
  hitPoints = hitPoints + amount;
  std::cout << "ClapTrap " << this->name << "repaired" << amount << " hitPoints"
            << std::endl;
}
