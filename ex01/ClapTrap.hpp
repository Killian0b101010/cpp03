/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:44:40 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/24 01:51:28 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
class ClapTrap {

protected:
  std::string name;
  int hitPoints;
  int energyPoints;
  int attackDamage;

public:
  ClapTrap();
  ClapTrap(const ClapTrap &clap);
  ClapTrap(std::string name);
  ClapTrap &operator=(const ClapTrap &other);
  ~ClapTrap();
  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};
#endif
