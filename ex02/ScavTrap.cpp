/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:53:49 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/24 02:01:18 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(const ScavTrap &scav) { this->name = scav.name; }

ScavTrap &ScavTrap::operator=(const ScavTrap &scav) {
  (void)&scav;
  return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  if (name.empty())
    this->name = "Default";
  else
    this->name = name;
  this->hitPoints = 100;
  this->energyPoints = 50;
  this->attackDamage = 20;
  std::cout << "ScavTrap " << this->name << " created !" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {

  if (energyPoints == 0)
    std::cout << "ScavTrap " << this->name << "has no point" << std::endl;
  if (hitPoints == 2)
    beRepaired(8);
  if (hitPoints > 2 && energyPoints != 0)
    std::cout << "ScavpTrap " << this->name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!"
              << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << this->name << " destroyed" << std::endl;
}
