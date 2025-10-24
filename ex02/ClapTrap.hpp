/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:44:40 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/24 06:23:24 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

#pragma once

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
class ClapTrap {

protected:
  std::string name;
  int hitPoints;
  int energyPoints;
  int attackDamage;

public:
  ClapTrap();
  ClapTrap(const ClapTrap &scav);
  ClapTrap(std::string name);
  ClapTrap &operator=(const ClapTrap &other);
  ~ClapTrap();
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
#endif
