/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 06:59:37 by kiteixei          #+#    #+#             */

/*   Updated: 2025/10/22 06:59:38 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main(void) {

  ClapTrap clap("Lotfi");
  clap.attack("Anis");
  ScavTrap scav("Hamza");
  scav.guardGate();
  scav.attack("Yuno");
}
