/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 06:59:44 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/22 20:57:04 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name) {
  this->name = name;
  this->hitPoints = 10;
  this->energyPoints = 10;
  this->attackDamage = 0;
  std::cout << "Claptrap " << this->name << " created !" << std::endl;
}
ClapTrap::~ClapTrap() { std::cout << "Claptrap destroyed" << std::endl; }

void ClapTrap::attack(const std::string &target) {

  for (int i = 0; i < energyPoints; i++) {
    if (energyPoints == 0) {
      std::cout << "Claptrap " << this->name << "has no point" << std::endl;
      return;
    }
    if (hitPoints <= 2)
      beRepaired(8);
    if (hitPoints > 2 && energyPoints != 0)
      std::cout << "ClapTrap " << this->name << " attacks " << target
                << ", causing " << attackDamage << " points of damage!"
                << std::endl;
    takeDamage(8);
    if (energyPoints == 0) {
      std::cout << "Claptrap" << this->name << " has no point" << std::endl;
      return;
    }
    energyPoints--;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << "ClapTrap " << "take " << amount << " points of damage"
            << std::endl;
  hitPoints = hitPoints - amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (energyPoints == 0) {
    std::cout << "Claptrap" << this->name << " has no point" << std::endl;
    return;
  }
  energyPoints--;
  hitPoints = hitPoints + amount;
  std::cout << "ClapTrap " << this->name << "repaired " << amount
            << " hitPoints" << std::endl;
}
