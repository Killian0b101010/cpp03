/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 00:59:09 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/24 01:19:17 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string name) {
  this->name = name;
  this->hitPoints = 100;
  this->energyPoints = 10;
  this->attackDamage = 30;
  std::cout << "FragTrap " << this->name << " created !" << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << this->name << " it's here" << std::endl;
}

void FragTrap::attack(const std::string &target) {

  if (energyPoints == 0)
    std::cout << "FragTrap " << this->name << "has no point" << std::endl;
  if (hitPoints == 2)
    beRepaired(8);
  if (hitPoints > 2 && energyPoints != 0)
    std::cout << "FragTrap " << this->name << " attacks " << target
              << ", causing " << attackDamage << " points of damage!"
              << std::endl;
}

FragTrap::~FragTrap() { std::cout << "FragTrap destroyed !" << std::endl; }
