/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:56:44 by kiteixei          #+#    #+#             */
/*   Updated: 2025/10/23 06:39:50 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
  ScavTrap();
  ScavTrap(ScavTrap &scav);
  ScavTrap(std::string name);
  ScavTrap &operator=(const ScavTrap &other);
  void guardGate();
  void attack(const std::string &target);
  ~ScavTrap();

private:
  const std::string NAME;
};
#endif
